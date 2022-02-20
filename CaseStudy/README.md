# Case Studies

## IR Remote

### Block Diagram
![image](https://user-images.githubusercontent.com/98849909/154833043-3efc98eb-f95c-4328-b780-452e56f03bc0.png)


### Description 
* Here as we can see the title, I have done the case study on remote control and its block diagram is as shown above.
* It has different components in the block diagram, such as sensors, ADC, DAC, Power supply unit, transmitter and a the most important component i.e., Processor.
* **Sensors** are generally used in gathering of information according to which necessary actions can be taken. Here in this example, sensor senses the input from the user about the input in analog form which is then converted into digital form using **Analog to Digital convertor**. 
* The converted signal is then sent to the controller or the **Processor** which after running certain operation sent the resultant to the final device, but the signal in still in digital form which is then converted onto analog form using **Digital to Analog convertor**. 
* The converted signal in then sent to **IR Transmitter/Signal Transmitter**.


## Two Wheeled Balancing Robot(TWBR)

### Block Diagram
![image](https://user-images.githubusercontent.com/98849909/154833139-88d7c62c-eeb0-4638-802b-2db4b882f57b.png)


### Description
* In this device there are many components which can be clubbed in different units namely Interface, Power unit, Electric unit, Mechanism / Sensory unit, and Control unit. 
* Here each unit performs different tasks.
* **Interface Unit** provides the connection between user and the device whereas **Power unit** provides the electricity required to run the device.
* **Electrical unit** runs the power train i.e., motors and is responsible for other actuation in the device after receiving the commands from the **Control unit** which performs necessary operations like **PID control for balancing**.
* The rest of the system acts like any normal electric vehicle without the necessary feedback which is provided by **Mechanics/ Feedback unit** which consist of different sensors and sends the feedback required to balance the robot, to the Processor.

## Fence Protector
### Block Diagram
![FUNCTIONAL DIAGRAM](https://user-images.githubusercontent.com/98849909/154833285-e81345b5-6735-417b-b39c-d2832497a930.png)

### Descrption
* This device consist of various Sensors, Transducer and a Microcontroller.</br> </br>
#### Sensors: 
* **Light Dependent Resistor (LDR):** Used to detect the amount of light in the surrounding.
* **Vibration Sensor:** Used to sense the vibrations of the fence.
#### Transducer:
* **Speaker (piezoelectric):** Used to produce Sound as required. 
* **Light-Emitting Diode(LED):** Used to produce Light.

#### Application 
This device cam be easily modified to be implenmented for various application.
* Protecting Agricultral Fields from animals.
* It can be used as an anti theft device.
#### Working 
This device have to independent features.
* **Automatic LED**: This feature is implemented using and **LDR** which is used for detecting the light conditions of the surrounding. when the amount of light moves below certain threshold value which is set by the user, it send the signal to the **Controller** and the **LED** is turned on.
* **Anti Theft System**: As mentioned above it can be used in various application with slight modification, Here we have use a **Vibration Sensor** which is mounted on fence, it detects any sort of viberation and sends the signal to the **controller** which produces different sounds with the help of **Speakers**.</br>
The sound produced can vary as in if we are using it to protect and agriculture field then we can produce sound of the frequency which irritates the animal which generally distroyes the field in that area.


### Requirement Modelling

#### High Level Requirements
| Sl.No | ID | Requirements |
|----|----|-----|
| 1. | HLR1 | Sounding alarm or different sound in case someone is trying to enter the fence |
| 2. | HLR2 | Turning the lights ON at night |
| 3. | HLR3 | Turing the lights OFF at day break |

#### Low Level Requirements 
| Sl.No | ID | Requirements |
|----|----|-----|
| 1. | LLR1.1 | To set the threshold vibration |
| 2. | LLR1.2 | Sensing the Vibrations |
| 3. | LLR1.3 | Checking whether the threshold value of vibration is breched |
| 4. | LLR1.4 | In case of a breach Sounding alarm or producing required sound |
| 5. | LLR2.1 | To set the threshold light values |
| 6. | LLR2.2 | Sensing the amount of light |
| 7. | LLR2.3 | Checking whether the threshold value of light is breched  |
| 8. | LLR2.4 | In case of a breach Turning the lights ON |
| 9. | LLR3.1 | Checking whether the threshold value of light is attend |
|10. | LLR3.2 | Turning the light OFF |

