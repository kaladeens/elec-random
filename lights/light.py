import pyfirmata

board = pyfirmata.Arduino('COM5')

led1 = board.get_pin('p:11:p')
led2 = board.get_pin('d:10:p')
led3 = board.get_pin('d:9:p')

while True:
    led1.write(.5)
    led2.write(.5)
    led3.write(.8)
