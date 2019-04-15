import serial
import time
import os

print "STARTING PROGRAM"
arduinoSerial = serial.Serial('/dev/cu.usbmodem14101', 9600)
print "CONNECTED TO PORT"

if (arduinoSerial.inWaiting()>0):
	sdata = arduinoSerial.readline()
	print stdata


time.sleep(3)

print "STARTING"

arduinoSerial.write('2') #This releases powder.
print "POWDER"
time.sleep(2)

arduinoSerial.write('1') #This moves the conveyor belt forward.
print "CONVEYOR #1"
time.sleep(1)

arduinoSerial.write('3') #This turns on coffee pot.
print "COFFEE MACHINE"
os.system("""wemo switch "covfefe" on""")
time.sleep(60)
os.system("""wemo switch "covfefe" off""")

arduinoSerial.write('1') #This moves the conveyor belt forward.
print "CONVEYOR #2"
time.sleep(1)

arduinoSerial.write('4') #This releases boba.
print "BUBBLES"

