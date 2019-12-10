# SmartHomeMonitor HC-SR501 Sensor

## Table of Contents
* [Introduction](#Introduction)
* [Materials/Budget](#Materials/Budget)
* [Time Commitment](#Time_Commitment)
* [Mechanical Assembly](#Mechanical_Assembly)
* [PCB / Soldering](#PCB_Soldering)
* [Power Up](#Power_up)
* [Unit Testing](#Unit_Testing)
* [Production Testing](#Production_Testing)


## <a name="Introduction">Introduction</a>

<p>These build instructions will help you use the HC-SR501 sensor along with the raspberry pi in order to be able to detect motion. The sensor has 3 pins: VCC, GND, OUT. The operational voltage for the sensor is between 5 and 20 volts with an output voltage of 3.3V when motion is detected and 0V when no motion is detected. For more details about this sensor you can check out the link below </p> 

https://www.mpja.com/download/31227sc.pdf


**Hardware Diagram**

![Laser Cutting File](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/Diagram.png?raw=true)


**System Diagram**

![Laser Cutting File](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/System.png?raw=true)




## <a name="Materials/Budget">Materials/Budget</a>

<p>This project will require a lot of materials and is recommended to be purchased at once so that you can have all your materials together and ready to complete the project in a weekend.

  
RaspberryPi (These instructions will be using the B+ modle although new versions should work as well) <br>
HC-SR501 $10 (Reccomended to get a multi-pack the first one I used was broken)<br>
Solder $15<br>
Breadboard $13<br>
LED Multipack $5<br>
330 Ohm resistor Mylitpack $5<br>
USB to Ethernet adapter $16(This may not be needed if your computer/ Laptop as a Ethernet port) <br> 
Ethernet cable $12<br>
3 Pin header  34 Cents<br>
6 Pin header  MultiPack $10.99<br>
</p>

**Other Tools**
Safty goggles $11<br>
Soldering Iron <br>

## <a name="Time_Commitment">Time Commitment</a>

<p> Your total time commitment for this project should be no more than a weekend approximately(6 hours) less if you have all your materials and tools purchased and shipped <br> 

Ordering Parts (2 hours)
Mechanical Assembly (1 hour)  <br>
Setting up raspberry Pi (45 minutes)  <br>
Breadboarding (1 hour)  <br>
Soldering PCB (1.5 hours)  <br>
Unit Tests (1 hour)  <br>
</p>


## <a name="Mechanical_Assembly">Mechanical Assembly</a>

To start the mechanical assembly part of the project you will need to download the file below and have it laser cut.
[Laser Cutting File](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Mechanical/RaspberryPiEnclosure.cdr)


**1** Start by aligning the acrylic holes with the Holes in the raspberry Pi.

**2** Next, use 4 M1 screw and nuts to insert though the holes and hold the Raspberry Pi into place

**3** Then, join the longest sides of the case through the rectangular cut outs on the base of the case holding the Pi. Match the side with the cutouts that fit the I/O on the Pi.

**4** Next, join 1 on the end pieces the sides in the last step.

**5** Next, add the top pieces of the case, it should have a square cutout. insert the rectangles through the rectangle cutout on the top of the side pieces.

**6** Lastly, attach the last end piece by pressing down on the bottom latches and pushing it into place.




![PCB Files](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/enclosure.jpg?raw=true)


## <a name="PCB_Soldering">PCB / Soldering</a>



[PCB Files](https://github.com/getLiauba/SmartHomeMonitor/tree/master/Electronics/PCB)

<p>If you haven’t yet got your PCB made you can download the files above to have it created</p> <br/>


Follow the numbered list until you reach "Power up".

**1.0** To being the soldering we will start with the top of the PCB board.

**1.1** First, begin by soldering the VIA's circled in red. To do this first strip a wire and put it through the hole and make the 5 necessary joints and do your best to make sure there are no vacancies around the circular rings of the PCB (referring to the image below, the joints in the pink rectangle should have more solder around the metal rings of the PCB to eliminate vacancies).
  
**1.2** Secondly, Insert the 330 ohm resistor so the pins come through to the top of the PCB where the green circles are, and make the joints (Attempt to eliminate vacancies).
  
**1.3** Thirdly, Insert 6 pin header so the pins come through to the top of the PCB where the pink rectangle is and make the joints (Attempt to eliminate vacancies).



![PCB_TOP](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_TOP.png?raw=true)

**2.0** Next start to solder the bottom of the PCB. 

**2.1** Frist begin by finishing soldering the 5 VIA's (now on the bottom of the PCB). 

**2.2** Secondly, Insert the LED's pins from the top going to the bottom where the purple circles are, and have the positive pin of the LED closest to the right (closest to the 3 pin header) and make the joints. 

**2.3** Lastly, Insert the 3 pin header from the top to the bottom of the PCB where the orange rectangle is and make the joints.


![PCB_BOTTOM](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_Bottom.png?raw=true)



## <a name="Power_up">Power Up</a>

Before powering up the PCB and connecting it to the Raspberry Pi. you **MUST** test your PCB to ensure everything is connected and soldered correctly, as well as no shorts between power and ground. This will ensure you do not ruin you Raspberry Pi. Also you must make sure your raspberry pi has an OS setup on it (ideally Raspian) if you need to do this still follow this tutorial [RaspberryPi Setup](https://projects.raspberrypi.org/en/projects/raspberry-pi-setting-up)

**This first test ensures voltage will reach the connected sensor.**

**1** To being testing insert a wire into the 3 pin header labeled 1 on the "PCB Top" image below and another wire into 6 pin header labeled 6 below on the "PCB Bottom" image. Using a DMM connect the red wire to one of the wires you have inserted and the black dmm wire to the other wire you inserted. Read the resistance and if a small resistance is read on the DMM proceed to step 2. If not re-solder and try the test again.

**This second test ensures that there are no shorts going from power to ground. **

**2** Remove the wires from step 1, and add a jumper wire from header 1 going to 2 on the PCB top image. Next connect the red wire from the dmm to 5 and the black wire from the dmm to 6 labeled on the 6 pin header on the "PCB Bottom" image. Ensure that the dmm is reading a small resistance move to step 3, if not attempt to solder again then test again.

**This third test ensures that the LED and resistor are properly soldered. **

**3** Remove all the wires from the precious step, and insert 1 wire into the 6 pin header labeled 1 and insert another wire into the 6 pin header labeled 2. Using the dmm connect 1 of the cables to the first wire and the second cable to the second wire, ensure that the dmm is reading a small resistance. If so your testing is complete and you can connect your sensor into the 3 pin header and connect your PCB to your Raspberry Pi, if not attempt to solder again then test again.

After successfully completing these tests you are ready to connect your sensor to your PCB and you PBC to you Raspberry Pi.


[Sensor Code](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Software/sensor.c)

In order to see the sensor work, you need to write your own code on the raspberry Pi or download the code I provided, and using a tool such as winSCP(windows) or Cyberduck(mac), transfer this file to the Pi. compile the code using "gcc -o name name.c"
and to run it use ./name


**PCB Top**

![PCB_Top_PTest](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_top_Ptest.png?raw=true)


**PCB Bottom**

![PCB_BOTTOM_pTest](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_Bottom_Ptest.png?raw=true)


## <a name="Unit_Testing">Unit Testing</a>

The unit testing of this project can be done throughout the process of creating the project and consists of 3 unit tests.

**1. -This unit test will test the sensor to ensure it works properly**
  
  Being this unit test by attaching a wire to VCC on the HC-SR501 sensor to a 5v power supply and the GND pin on the HC-SR501 to to ground of the 5v power supply, then connect a resistor and LED in series to the OUT pin of the sensor then to ground. Check to see if the LED lights up when motion is detected, if so the sensor is working properly.

**2. -This unit test will test the Raspberry Pi in order to SSH into it**

By opening network preferences and finding you PI's IP address you should be able to ssh into the Pi using the command,
"ssh pi@169.245.80.21" in your mac terminal you using putty.

**3 -This unit test will test sensor connected to the raspberry Pi.**

Begin by getting you HC-SR501 sensor, breadboard, wire and raspberry PI B+, and follow the steps below to connect the circuit, there is also an attached link of the raspberry Pi pins for reference and the breadboard as well.

[RaspberryPi Pins](https://pinout.xyz)

**3.1** First, connect raspberry Pi pin 4 to the positive rail on your breadboard (Pin 4 provides the circuit with 5V) and
connect Pin 6 to the negative/ground rail on your breadboard <Pin 6 is the ground pin> </br>
**3.2.** Secondly, connect a wire from the positive rail on the breadboard to VCC and another wire from the negative/ ground rail to the gnd pin on the HC-SR501 sensor. </br>
**3.3.** Third, connect a wire from pin 8 on the Raspberry Pi to the OUT pin the HC-SR501 sensor.
**3.4.** Lastly, connect a wire from pin 10 on the Raspberry Pi to a 330 ohm resistor, and connect that resistor to and LED, and from the other pin on the LED connect that pin to ground. </br>


![Breadboard](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/Fritzing/HC-SR501-Pi_Breadboard.jpg?raw=true)<br />

**4 -This unit test will test the connection of the PCB. This test is documented in the power up section of the blog**


**This first test ensures voltage will reach the connected sensor.**

**4.1** To being testing insert a wire into the 3 pin header labeled 1 on the "PCB Top" image below and another wire into 6 pin header labeled 6 below on the "PCB Bottom" image. Using a DMM connect the red wire to one of the wires you have inserted and the black dmm wire to the other wire you inserted. Read the resistance and if a small resistance is read on the DMM proceed to step 2. If not re-solder and try the test again.

**This second test ensures that there are no shorts going from power to ground.**

**4.2** Remove the wires from step 1, and add a jumper wire from header 1 going to 2 on the PCB top image. Next connect the red wire from the dmm to 5 and the black wire from the dmm to 6 labeled on the 6 pin header on the "PCB Bottom" image. Ensure that the dmm is reading a small resistance move to step 3, if not attempt to solder again then test again.

**This third test ensures that the LED and resistor are properly soldered. **

**4.3** Remove all the wires from the precious step, and insert 1 wire into the 6 pin header labeled 1 and insert another wire into the 6 pin header labeled 2. Using the dmm connect 1 of the cables to the first wire and the second cable to the second wire, ensure that the dmm is reading a small resistance. If so your testing is complete and you can connect your sensor into the 3 pin header and connect your PCB to your Raspberry Pi, if not attempt to solder again then test again.

After successfully completing these test you are ready to connect your sensor to your PCB and you PBC to you Raspberry Pi.


**5 -This unit test will PCB connected to the Raspberry Pi & software.**

Connect the 6 pin header of the PCB to the raspberry Pi, make sure the labeled 6 is connected to pin 4 of the raspberry Pi. Connect the HC-SR501 sensor to the 3 pin header.

[Sensor Code](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Software/sensor.c)

Download the code I provided, and using a tool such as winSCP(windows) or Cyberduck(mac), transfer this file to the Pi. compile the code using "gcc -o name name.c"
and to run it use ./name


## <a name="Production_Testing">Production Testing</a>

If I was manufacturing multiple units of these PCB's I would create a circuit tester that the PCB 6 pin header could be easily plugged into. This circuit tester would produce a light indicating there is no short between power and ground, it would also provide voltage to the LED on the PCB to ensure it correctly lights up and that all connections are as they should be. There is no need in testing the Raspberry Pi or the sensor because it should have been done by the company that we purchased the pats from.







