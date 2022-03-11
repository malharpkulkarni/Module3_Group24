## High level test plan :

|Test ID | Description |  Expected Input   |   Expected output   |   Actual output   |   Status   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR_1 | Car Lock| Button is pressed one time  |  Car locked    |     Car locked   |  ✅ | 
|HLR_2 |Car unlock| Button is pressed two times	 | Car unlocked|	Car unlocked   |✅  |                   
|HLR_3	| Alarm activation/deactivation| Button is pressed three times |	 Alarm activation/deactivation | Alarm activation/deactivation|✅ |
|HLR_4|	Approach Light|	Button is pressed four times |	Approach Light ON	|Approach Light ON|✅ |
|HLR_5|Data Encryption |Number of user clicks | Random Data | Random Data |✅|


## Low Level test plan :
|Test ID | Description |  Input   |   Exp O/P   |   Actual Out   |   Status   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
| LLR_1 | Car Lock| Button is pressed one time | All LEDs will be ON and Print Lock| All LEDs will be ON and Print Lock |✅ |
| LLR_2 |Car unlock |Button is pressed two times| All LEDs will be OFF and Print Unlock | All LEDs OFF and Print Unlock | ✅ |
| LLR_3 |Alarm activation/deactivation | Button is pressed three times | All LEDs will be ON in Clockwise and print Alarm activation/deactivation | All LEDs ON Clockwise and print Alarm activation/deactivation | ✅ |
| LLR_4 |Approach Light|	Button is pressed four times | All LEDs will be ON in  Anticlockwise and Print Approach Light | All LEDs ON Anticlockwise and Print Approach Light| ✅ |
