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


## <a name="Materials/Budget">Materials/Budget</a>

<p>This project will require alot of materials and is reccomended to be purchased at once so that you can have all your materials together and ready to complete the project in a weekend.
  
RaspberryPi (These instructions will be using the B+ modle although new versions should work as well) <br>
HC-SR501 $10 (Reccomended to get a multi-pack the first one I used was broken)<br>
Solder<br>
Breadboard <br>
LED<br>
330 Ohm resistor <br>
Jumpper cables <br>
Safty goggles <br>
Soldering Iron <br>
USB to Ethernet adapter (This may not be needed if your computer/ Laptop as a Ethernet port) <br> 
Ethernet cable <br>
3 Pin header  <br>
6 Pin header  <br>

</p>



## <a name="Time_Commitment">Time Commitment</a>

<p> Your total time commitment for this project should be no more than a weekend approximentally(X hours) assuming you have all your materials and tools purchased and shiped  <br> 

Mechanical Assembly (1 hour)  <br>
Setting up raspberry Pi (1 hour)  <br>
Breadboarding (1 hour)  <br>
Soldering PCB (1.5 hours)  <br>
Testing PCB (1 hour)  <br>
</p>


## <a name="Mechanical_Assembly">Mechanical Assembly</a>

<p>To start the mechanical assembly part of the project ,begin by getting you HC-SR501 sensor, breadboard, wire and raspberry PI B+, and follow the steps below to connect the ciruit, there is also an attached image of how the wiring should look on the raspberry Pi and the breadbaord as well as the raspberry pi pin numbers(Image provided by www.raspberry-pi-geek.com) .<br>
</p>

<p> 1. First, connect raspberry Pi pin 4 to the positive rail on your breadboard (Pin 4 provides the cirucit with 5V) and
connect Pin 6 to the negative/ground rail on your breadbaord <Pin 6 is the ground pin> </br>
  2. Secondly, connect a wire from the positive rail on the breadbaord to VCC and another wire from the negative/ ground rail to the gnd pin on the HC-SR501 sensor. </br>
  3. Third, connect a wire from pin 8 on the Raspberry Pi to the OUT pin the the HC-SR501 sensor.
  4. Lastly, connect a wire from pin 10 on the Raspberry Pi to a 330 ohm resistor, and conenct that resistor to and LED, and from the other pin on the LED connect that pin to ground. </br>
</p>




![Breadboard](http://www.raspberry-pi-geek.com/var/rpi/storage/images/media/images/raspib-gpio/12356-1-eng-US/RasPiB-GPIO_reference.png)</br>
</br>
![Breadboard](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/Fritzing/HC-SR501-Pi_Breadboard.jpg?raw=true)<br />


## <a name="PCB_Soldering">PCB / Soldering</a>



[PCB Files](https://github.com/getLiauba/SmartHomeMonitor/tree/master/Electronics/PCB)

<p>If you havent yet got your PCB made you can download the files above to have it created</p> <br/>


Follow the numbered list until you reach "Power up".

**1.0** To being the soldering we will start with the top of the PCB board.

**1.1** First, Begin by soldering the VIA's circled in red. To do this first strip a wire and put it through the hole and make the 5 nessesary joints and do your best to make sure there are no vacancies around the circular rings of the PCB (referring to the image below, the joints in the pink rectangle should have more solder around the metal rings of the PCB to eliminate vacancies).
  
**1.2** Secondly, Insert the 330 ohm resistor so the pins come through to the top of the PCB where the green circles are, and make the joints(Attempt to eliminate vacancies).
  
**1.3** Thridly, Insert 6 pin header so the pins come through to the top of the PCB where the pink rectangle is and make the joints(Attempt to eliminate vacancies). 


![PCB_TOP](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_TOP.png?raw=true)

**2.0** Next start to solder the bottom of the PCB. 

**2.1** Frist begin by finishing soldering the 5 VIA's (now on the bottom of the PCB). 

**2.2** Secondly, Insert the LED's pins from the top going to the bottom where the purple circles are, and have the positive pin of the LED closest to the right (closest to the 3 pin header) and make the joints. 

**2.3** Lastly, Insert the 3 pin header from the top to the bottom of the PCB where the orange rectangle is and make the joints.


![PCB_BOTTOM](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_Bottom.png?raw=true)



## <a name="Power_up">Power Up</a>

Before powering up the PCB and connecting it to the Raspberry Pi. you **MUST** test your PCB to ensure everything is connected and soldered correctly, as well as no shorts between power and ground. This will ensure you do not ruin you Raspberry Pi.

This first test ensures voltage will reach the connected sensor.

**1** To being testing insert a wire into the 3 pin header labeled 1 on the "PCB Top" image below and another wire into 6 pin header labeled 6 below on the "PCB Bottom" image. Using a DMM connect the red wire to one of the wires you have inserted and the black dmm wire to the other wire you inserted. Read the reisitance and if a small reisitnace is read on the DMM proceed to step 2. If not re-solder and try the test again.

This second test ensures that there are no shorts going from power to ground.

**2** Remove the wires from step 1, and add a jumper wire from header 1 going to 2 on the PCB top image. Next connect the red wire from the dmm to 5 and the black wire from the dmm to 6 labeled on the 6 pin header on the "PCB Bottom" image. Ensure that the dmm is reading a small resistance move to step 3, if not attempt to solder again then test again.

This thrid test ensures that the LED and resistor are properly soldered.

**3** Remove all the wires from the pericous step, and insert 1 wire into the 6 pin header labeled 1 and insert another wire into the 6 pin header labeled 2. Using the dmm connect 1 of the cables to the first wire and the second cable to the second wire, ensure that the dmm is reading a small reisitance. If so your testing is complete and you can connect your sensor into the 3 pin header and connect your PCB to your Raspberry Pi, if not attempt to solder again then test again.

After sucessfully completing these test you are ready to connect you sensor to your PCB and you PBC to you Raspberry Pi.

[Sensor Code](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Software/sensor.c)

In order to see the sensor work, you need to write your own code on the raspberry Pi or download the code I provided, and using a tool such as winSCP(windows) or Cyberduck(mac), transfer this file to the Pi. compile the code using "gcc -o name name.c"
and to run it use ./name


**PCB Top**

![PCB_Top_PTest](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_top_Ptest.png?raw=true)


**PCB Bottom**

![PCB_BOTTOM_pTest](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_Bottom_Ptest.png?raw=true)





## <a name="Unit_Testing">Unit Testing</a>

Test sensor without circuit board first

then breadboard 

pi without sensor

remote desktop


## <a name="Production_Testing">Production Testing</a>

If I was making more of these. Make sure every circuit board that is produced does not have a short between power and ground. Possible make a tester ciruit to plug the PCB into.

Refer to the unit tests





