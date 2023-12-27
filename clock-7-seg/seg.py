import serial
import time

arduino = serial.Serial(port = 'COM5', baudrate = 115200, timeout = .1)

