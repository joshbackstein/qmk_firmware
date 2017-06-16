#!/bin/sh
#make <keyboard>-<keymap>-<target>
make atreus62-joshbackstein && sudo avrdude -p atmega32u4 -P /dev/ttyACM0  -c avr109  -U flash:w:./.build/atreus62_joshbackstein.hex
