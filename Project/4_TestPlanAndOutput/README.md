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





