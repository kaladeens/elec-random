import pyfirmata

board = pyfirmata.Arduino('COM5')

led1 = board.get_pin('d:11:o')
led2 = board.get_pin('d:10:o')
led3 = board.get_pin('d:9:o')

while True:
    led1.write(1)
    led2.write(0)
    led3.write(0)
