# Zephyr

- The version of zephyr used is 3.7.0
- A written version of the document is here https://www.digikey.in/en/maker/tutorials/2025/introduction-to-zephyr-part-1-getting-started-installation-and-blink

## Clone shawns repo
```
git clone https://github.com/ShawnHymel/introduction-to-zephyr.git
```

## Install docker and python
```
brew install docker
brew install python
```

## Activate the python virtual environment and install pyserial and esptool
```
python -m venv venv
source venv/bin/activate
python -m pip install pyserial==3.5 esptool==4.8.1
```

- Run the image—note that it mounts the local workspace/ directory into the container! We also expose ports 3333 (OpenOCD), 2222 (mapped from 22 within the container for SSH), and 8800 (code-server).
## Build and Run Docker Image
```
docker build -t env-zephyr-espressif -f Dockerfile.espressif .
docker run --rm -it -p 3333:3333 -p 2222:22 -p 8800:8800 -v "$(pwd)"/workspace:/workspace -w /workspace env-zephyr-espressif
```

- Connect to the server using either vs-code or the browser

## Build the examples
```
cd /workspace/apps/01_blink
west build -p always -b esp32s3_devkitc/esp32s3/procpu -- -DDTC_OVERLAY_FILE=boards/esp32s3_devkitc.overlay
```


