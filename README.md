# Project Template for Espressif based PlatformIO projects

## ESP32-S2 with ESP-Prog board

Espressif describes the JTAG connection in the [JTAG Debugging](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/jtag-debugging/index.html)
section

One must firstly install ZADIG (see [details](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/jtag-debugging/configure-ft2232h-jtag.html?highlight=zadig))
This tool can be used in order to switch the driver for ESP-Prog interface 0 to WinUSB

To check if the JTAG connection works in principally one can

```sh
# Start IDF-Environment
$ %IDF_PATH%\export.bat

# Check open OCD version
openocd --version

# Open JTAG connection
openocd -f board/esp32s2-kaluga-1.cfg

# One can query the location of config scripts by
echo $OPENOCD_SCRIPTS
```

