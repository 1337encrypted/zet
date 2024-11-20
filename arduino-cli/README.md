# Arduino CLI Script installation

```
curl -sSL https://raw.githubusercontent.com/1337encrypted/zet/refs/heads/main/arduino-cli/install.sh | bash
```

# Arduino CLI Manual Installation

## Download the Arduino CLI binary

```
curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
```

## Move the executable to `/usr/local/bin` to be accessed systemwide
```
sudo mv bin/arduino-cli /usr/local/bin/
```

## Verify the installation
```
arduino-cli version
```

## Install the esp32 core
```
arduino-cli core install esp32:esp32
```

## Update the Arduino CLI core index
```
arduino-cli core update-index
```

## Install Python and pyserial if not already installed
## Check if Python is installed
```
command -v python3
```

## Install pyserial using pip
```
python3 -m pip install pyserial --break-system-packages
```

## Add the user to the appropriate group (for serial access)
### For Ubuntu:
```
sudo usermod -aG dialout $USER
```

### For Arch Linux:
```
sudo usermod -aG uucp $USER
```

## Log out and log back in for group changes to take effect
