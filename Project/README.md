# FENCE PROTECTOR
12c96a9919904d91bd3f41ab5183c90a
# REQUIREMENT MODELLING 
## Abstract
The purpose of this project is to provide an automated solution for Fence Protection. Guarding the area is generally done using manual workers which tends to be costly and not every one can afford to employ a watchman. That’s where our solution comes into picture, the device is fully automated and doesn’t require any assistance. The device work on various principles including piezoelectric effect, photoelectric effect and various other mechanical principles. The solution performs 2 basic operations, firstly it is responsible for detecting any disturbance in fence, as in if any one is trying to forcibly enter. It also comes an automatic Light system which turns itself on in darkness. The solution uses a vibration sensor which is used for sensing of the vibrations and hence sends the readings to controller which is preprogramed with a threshold value and as soon as the threshold value is breached the controller uses the speaker to make noise of desired frequency as preprogramed by the user. In same way it also uses LDR i.e., Light Dependent Resistor to sense the amount of light and sends those reading to the controller which compares it with the minimum light required as preprogramed by the user and turns the Lights ON and OFF accordingly.

## Descrption
* This device consist of various Sensors, Transducer and a Microcontroller. It uses LDR for detecting the amount of light and turns the lights on accordingly, and in the same way Vibration sensor detects the vibrations and makes the required noise for protecting the Fence. </br> </br>
### Sensors: 
* **Light Dependent Resistor (LDR):** Used to detect the amount of light in the surrounding.
* **Vibration Sensor:** Used to sense the vibrations of the fence.
### Transducer:
* **Speaker (piezoelectric):** Used to produce Sound as required. 
* **Light-Emitting Diode(LED):** Used to produce Light.

## Requirement Modelling

### High Level Requirements
| Sl.No | ID | Requirements |
|----|----|-----|
| 1. | HLR1 | The device should sound an alarm or make noise of different frequency in case someone is trying to enter the fence |
| 2. | HLR2 | The device should turn the lights ON automatically at night |
| 3. | HLR3 | The device should turn the lights OFF automatically at day break |

### Low Level Requirements 
| Sl.No | ID | Requirements |
|----|----|-----|
| 1. | LLR1.1 | It should have threshold vibration setting |
| 2. | LLR1.2 | It should sence the Vibrations |
| 3. | LLR1.3 | It should check whether the threshold value of vibration is breched |
| 4. | LLR1.4 | In case of a breach it should sound alarm or producing noise of required frequency |
| 5. | LLR2.1 | It should have threshold light value setting |
| 6. | LLR2.2 | It should sense the amount of light |
| 7. | LLR2.3 | It should checking whether the threshold value of light is breched  |
| 8. | LLR2.4 | In case of a breach the device shall turning the lights ON |
| 9. | LLR3.1 | It should check whether the amount of light is above the threshold value of light |
|10. | LLR3.2 | It should Turn the lights OFF |

## Block Diagram
![FUNCTIONAL DIAGRAM](https://user-images.githubusercontent.com/98849909/154833285-e81345b5-6735-417b-b39c-d2832497a930.png)

## SWOT Analysis
![Algorithm flowchart example (1)](https://user-images.githubusercontent.com/98849909/155700832-9f512a1b-0d49-4f1c-83c6-64d57180f193.png)


### Application 
This device cam be easily modified to be implenmented for various application.
* Protecting Agricultral Fields from animals.
* It can be used as an anti theft device.
### Working 
This device have to independent features.
* **Automatic LED**: This feature is implemented using and **LDR** which is used for detecting the light conditions of the surrounding. when the amount of light moves below certain threshold value which is set by the user, it send the signal to the **Controller** and the **LED** is turned on.
* **Anti Theft System**: As mentioned above it can be used in various application with slight modification, Here we have use a **Vibration Sensor** which is mounted on fence, it detects any sort of viberation and sends the signal to the **controller** which produces different sounds with the help of **Speakers**.</br>
The sound produced can vary as in if we are using it to protect and agriculture field then we can produce sound of the frequency which irritates the animal which generally distroyes the field in that area.

# Architecture/ Structural Diagrams
## Black Box of Fence Protector
 ![image](https://user-images.githubusercontent.com/98849909/155719353-17bcf488-d166-4d64-bd58-65372658d2e3.png)

## Functional Diagram of Fence Protector
 ![image](https://user-images.githubusercontent.com/98849909/155719371-709ae991-badc-4030-b17f-00e5536e8479.png)

## Flowchart of Fence Protector

![image](https://user-images.githubusercontent.com/98849909/155719390-4f7080f3-7460-4eaf-97c6-6a66e7c9900e.png)

## Use case Diagram of Fence Protector

![image](https://user-images.githubusercontent.com/98849909/155719418-b6a1f3e3-c31b-436f-9db1-53f37651f686.png)

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

# Test Plan and Output

## Test Plan
| Sl.No | ID | Requirements |Expecteded Output|Actual Output|Status|
|----|----|-----|----|-----|-----|
| 1. | TPID1 | Vibrations are to be sensed | Variable "val" used for sensing the vabiration | val=1 | Pass |
| 2. | TPID2 | Speaker should be on when Vibration increased | val>=1 : Speaker is ON  | val=9 : Speaker is ON | Pass|  
| 3. | TPID3 | Noise should stop when Vibration is not detected | val<1 : Speaker is OFF | val=0 : Speaker is OFF | Pass |  
| 4. | TPID4 | Amount of light should be sensed | Variable "value" is used for sensing the amount of light | value=432 | Pass | 
| 5. | TPID5 | It should have threshold light value setting | Macro MINIMUMLIGHT should be set | MINIMUMLIGHT=300 | Pass|
| 6. | TPID6 | If amount of light reduces below threshold the lights should be turned ON | MINIMUMLIGHT<300 : Pin 13 LED ON | MINIMUMLIGHT=73 : Pin 13 LED ON | Pass |
| 7. | TPID7 | If amount of light is greater than threshold value then the lights should be OFF | MINIMUMLIGHT>=300 : Pin 13 LED OFF | MINIMUMLIGHT=432 : Pin 13 LED OFF | Pass |

# Output 
* **Schematics**
  ![Screenshot (17)](https://user-images.githubusercontent.com/98849909/157192334-e60c1b32-6bbb-435a-8caf-36719e6d62cf.png)
* Vibration values:
  * **val=0, Speakers are OFF**
  ![Screenshot (18)](https://user-images.githubusercontent.com/98849909/157192293-765fc483-1e8b-40d9-89e6-781eeed0a985.png) 
  * **val>0, Speakers are ON**
  ![Screenshot (21)](https://user-images.githubusercontent.com/98849909/157192216-78f80faa-b56c-4129-aea6-1f680f90aa54.png)
  ![Screenshot (20)](https://user-images.githubusercontent.com/98849909/157192246-8474bac1-ff42-4aaf-a1c8-87435ef95e2f.png)

* Light Values:
  * **value<300, Light ON**
  ![Screenshot (23)](https://user-images.githubusercontent.com/98849909/157192089-32d4debb-27d5-45f0-92e2-a30719f66002.png)

  * **value>300, Light OFF**
  ![Screenshot (22)](https://user-images.githubusercontent.com/98849909/157192129-7555eeab-b7c0-435a-adf7-57a5f9acdbe1.png)


# Images and Videos

* **Schematics**
  ![Screenshot (17)](https://user-images.githubusercontent.com/98849909/157192334-e60c1b32-6bbb-435a-8caf-36719e6d62cf.png)
* Vibration values:
  * **val=0, Speakers are OFF**
  ![Screenshot (18)](https://user-images.githubusercontent.com/98849909/157192293-765fc483-1e8b-40d9-89e6-781eeed0a985.png) 
  * **val>0, Speakers are ON**
  ![Screenshot (21)](https://user-images.githubusercontent.com/98849909/157192216-78f80faa-b56c-4129-aea6-1f680f90aa54.png)
  ![Screenshot (20)](https://user-images.githubusercontent.com/98849909/157192246-8474bac1-ff42-4aaf-a1c8-87435ef95e2f.png)

* Light Values:
  * **value<300, Light ON**
  ![Screenshot (23)](https://user-images.githubusercontent.com/98849909/157192089-32d4debb-27d5-45f0-92e2-a30719f66002.png)

  * **value>300, Light OFF**
  ![Screenshot (22)](https://user-images.githubusercontent.com/98849909/157192129-7555eeab-b7c0-435a-adf7-57a5f9acdbe1.png)
  
# Refferences

https://www.arduino.cc/en/software <br/>
https://www.simulide.com/p/home.html




