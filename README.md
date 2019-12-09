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
  
**1.3** Thridly, Insert 6 pin header so the pins come through to the top of the PCB where the pink rectangle is and make the joints(Attempt to eliminate vacancies. 


![PCB_TOP](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_TOP.png?raw=true)

**2.0** Next start to solder the bottom of the PCB. 

**2.1** Frist begin by finishing soldering the 5 VIA's (now on the bottom of the PCB). 

**2.2** Secondly, Insert the LED's pins from the top going to the bottom where the purple circles are, and have the positive pin of the LED closest to the right (closest to the 3 pin header) and make the joints. 

**2.3** Lastly, Insert the 3 pin header from the top to the bottom of the PCB where the orange rectangle is and make the joints.



![PCB_BOTTOM](https://github.com/getLiauba/SmartHomeMonitor/blob/master/Images/PCB_Bottom.png?raw=true)



## <a name="Power_up">Power Up</a>




## <a name="Unit_Testing">Unit Testing</a>




## <a name="Production_Testing">Production Testing</a>





