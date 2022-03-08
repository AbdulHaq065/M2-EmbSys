# Implementation
## Components Used
### Sensors: 
* **Light Dependent Resistor (LDR):** 
![LDR_20MM](https://user-images.githubusercontent.com/98849909/155838596-d2e01716-8225-4306-8edb-1cda5b462ed9.jpg)

LDR is a ia a type pf resistor which depends on the amount of light in the surrounding. Here in this project it is used to detect the amount of light in the surrounding and send the readings to the controller.
</br></br>
* **Vibration Sensor:** 
![SW-420-sensor](https://user-images.githubusercontent.com/98849909/155838635-7ee3c3f6-fd35-4c04-8877-db06580b9939.jpg)

It is the type of sensor which works on Mechanical principles for calculating the amount of light in the surrounding. Here in this project it is used to sense the vibrations of the fence and send the readings to the controller.
</br></br>
### Transducer:

* **Light-Emitting Diode(LED):** </br></br>
![images](https://user-images.githubusercontent.com/98849909/155838699-bce9333d-0159-4854-b271-95a7ebc67341.jpg)

 It is used for emitting light when electricity is provided to it. Here in this project it is used to produce Light in a prototype.
</br></br>
### Pseudo Actuator 
* **Speaker (piezoelectric):** </br></br>
![download](https://user-images.githubusercontent.com/98849909/155838713-c17432d3-9e2d-49fd-99dd-43c421a24235.jpg)

It is a Piezoelectric device which produces sound when exposed to electric signals of different frequency. Here it is used to produce sound of different frequency as required. Many a times speakers are also regarded as actuators as they performs action of produsing sound/noise.
</br></br>
### Coontroller
* **Arduino UNO** <br/> 
![download](https://user-images.githubusercontent.com/98849909/157196531-61246171-8d8e-4634-b2d0-f96ba6f30751.png)
* For the task which is to be done in this project do not require any complex calculation and hence can go with any cost efficient microcontroller, we have used Arduino UNO microcontroller board which comes with ATmega328P. It operates on 5V of operating voltage and consists of 32 KB Flash Memory.

## Software Used
### Arduino IDE 
I have used Arduino IDE for programming. 
![download (1)](https://user-images.githubusercontent.com/98849909/157197583-8c87b3d7-1d15-4500-af73-238fda214fda.jpg)<br/>
Arduino IDE is an open source software which makes Coding and Uploading easier on to the board. It provides various inbuilt functions and libraries which makes coding easier.
### Some used inbuilt functions:
* **analogRead()**: It is used for reading values from specified Analog Pin( In our case Pin A0 ). Arduino boards contain a multichannel, 10-bit analog to digital converter. This means that it will map input voltages between 0 and the operating voltage(5V or 3.3V) into integer values between 0 and 1023.
  * Syntax
    analogRead(pin);
* **digitalRead()**: It is used for reading values from specified Digital Pin( In our case Pin 7)
  * Syntax
    digitalRead(pin);
* **digitalWrite()**:Write a HIGH or a LOW value to a digital pin. If the pin has been configured as an OUTPUT with pinMode() , its voltage will be set to the corresponding value: 5V (or 3.3V on 3.3V boards) for HIGH , 0V (ground) for LOW.( In our case it is Pin 9 and Pin 13)
  * Syntax
    digitalWrite(pin, value);
* **Tone/noTone**: Tone function is used to generate square waves of perticular frequency on the assigned Pin. Pin number frequency and the duration can also be mentioned. Where as noTone function is used to stop the frequecy if the duration is not mentioned.
  * Syntax
  tone(pin, frequency)
  tone(pin, frequency, duration) 
  

### SimulIDE
![download (2)](https://user-images.githubusercontent.com/98849909/157200941-1dcfc567-9341-40e7-95f9-33840dcacfb3.jpg)<br/>
I have used SimulIDE for the Simulation of the circuite. SimulIDE is a simple real time electronic circuit simulator, intended for hobbyist or students to learn and experiment with simple electronic circuits and microcontrollers, supporting PIC, AVR and Arduino.

