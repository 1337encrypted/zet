#!/bin/bash

# Determine the package manager
if command -v apt &> /dev/null; then
    PKG_MANAGER="apt"
    UPDATE_CMD="sudo apt update"
    INSTALL_CMD="sudo apt install -y"
    SERIAL_GROUP="dialout"
elif command -v pacman &> /dev/null; then
    PKG_MANAGER="pacman"
    UPDATE_CMD="sudo pacman -Sy"
    INSTALL_CMD="sudo pacman -S --noconfirm"
    SERIAL_GROUP="uucp"
else
    echo "Unsupported package manager. This script supports apt (Ubuntu) and pacman (Arch)."
    exit 1
fi

# Function to install dependencies
install_dependencies() {
    local package=$1
    if ! command -v "$package" &> /dev/null; then
        echo "$package is not installed. Installing $package..."
        $UPDATE_CMD
        $INSTALL_CMD "$package"
    else
        echo "$package is already installed."
    fi
}

# Function to install Python and pyserial
install_python_and_pyserial() {
    echo "Checking for Python installation..."

    # Check if Python is installed
    if ! command -v python3 &> /dev/null; then
        echo "Python is not installed. Installing Python..."
        if [ "$PKG_MANAGER" = "apt" ]; then
            $INSTALL_CMD python3 python3-pip
        elif [ "$PKG_MANAGER" = "pacman" ]; then
            $INSTALL_CMD python python-pip
        fi
    else
        echo "Python is already installed."
    fi

    # Check if pip is installed
    if ! command -v pip3 &> /dev/null && ! command -v pip &> /dev/null; then
        echo "pip is not installed. Installing pip..."
        if [ "$PKG_MANAGER" = "apt" ]; then
            $INSTALL_CMD python3-pip
        elif [ "$PKG_MANAGER" = "pacman" ]; then
            $INSTALL_CMD python-pip
        fi
    fi

    # Check if pyserial is installed
    if ! python3 -m pip show pyserial &> /dev/null; then
        echo "pyserial is not installed. Installing pyserial with --break-system-packages..."
        python3 -m pip install pyserial --break-system-packages
    else
        echo "pyserial is already installed."
    fi
}

# Check for curl
install_dependencies curl

# Check for tar
install_dependencies tar

# Check for Arduino CLI
if command -v arduino-cli &> /dev/null; then
    echo "Arduino CLI is already installed. Exiting."
    exit 0
fi

# Install Python and pyserial
install_python_and_pyserial

# Download the latest Arduino CLI binary
echo "Downloading Arduino CLI..."
curl -fsSL https://downloads.arduino.cc/arduino-cli/arduino-cli_latest_Linux_64bit.tar.gz -o arduino-cli.tar.gz

# Extract the downloaded archive
echo "Extracting Arduino CLI archive..."
tar xf arduino-cli.tar.gz

# Move arduino-cli to a directory in PATH
echo "Moving Arduino CLI binary to /usr/local/bin/..."
sudo mv arduino-cli /usr/local/bin/

# Clean up
echo "Cleaning up..."
rm arduino-cli.tar.gz

# Add user to the appropriate group
echo "Adding the current user to the $SERIAL_GROUP group..."
sudo usermod -aG "$SERIAL_GROUP" "$USER"
echo "You need to log out and log back in for group changes to take effect."

echo "Arduino CLI installation completed successfully."
