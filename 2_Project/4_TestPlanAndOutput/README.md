## High level test plan :

|Test ID | Description |   Input   |   Expected output   |   Actual output   |   Status   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR_1 | Car Lock| Button is pressed one time  |  Car Window status   |     Displayed Car Window status  |  ✅ | 
|HLR_2 |Car unlock| Button is pressed two times	 | Car alarm status|	Displayed Car alarm status  |✅  |                   
|HLR_3	| Alarm activation/deactivation| Button is pressed three times |	 Car Battery Status | Displayed Car Battery Status |✅ |
|HLR_4|	Approach Light|	Button is pressed four times |	Car Door Status	|Displayed Car Door Status|✅ |



## Low Level test plan :
|Test ID | Description |  Input   |   Expected output   |   Actual Output   |   Status   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
| LLR_1 | Car Lock| Button is pressed one time | All LEDs will be ON and Print Car Window status | All LEDs will be ON and Print Car Window status |✅ |
| LLR_2 |Car unlock |Button is pressed two times| All LEDs will be OFF and Print  Car alarm status| All LEDs will be OFF and Print  Car alarm status | ✅ |
| LLR_3 |Alarm activation/deactivation | Button is pressed three times | All LEDs will be ON in Clockwise and print  Car Battery Status | All LEDs will be ON in Clockwise and print  Car Battery Status  | ✅ |
| LLR_4 |Approach Light|	Button is pressed four times | All LEDs will be ON in  Anticlockwise and Print Car Door Status | All LEDs will be ON in  Anticlockwise and Print Car Door Status| ✅ |
