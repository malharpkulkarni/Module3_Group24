## High level test plan :

|Test ID | Description |  Input   |   Exp O/P   |   Actual Out   |   Status   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR_1 | Car Lock| Button press 1 time  |  Car locked    |     Car locked   |  ✅ | 
|HLR_2 |Car unlock| Button press 2 time	 | Car unlocked|	Car unlocked   |✅  |                   
|HLR_3	| Alarm activation/deactivation| Button press 3 time |	 Alarm activation/deactivation | Alarm activation/deactivation|✅ |
|HLR_4|	Approach Light|	Button press 4 time |	Approach Light ON	|Approach Light ON|✅ |
|HLR_5|Data Encryption |No of user clicks | Random Data | Random Data |✅|


## Low Level test plan :
|Test ID | Description |  Input   |   Exp O/P   |   Actual Out   |   Status   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
| LLR_1 | Car Lock| Button press 1 time | All LEDs ON & Print Lock| All LEDs ON & Print Lock |✅ |
| LLR_2 |Car unlock |Button press 2 time| All LEDs OFF & Print Unlock | All LEDs OFF & Print Unlock | ✅ |
| LLR_3 |Alarm activation/deactivation | Button press 3 time | All LEDs ON Clockwise & print Alarm activation/deactivation | All LEDs ON Clockwise & print Alarm activation/deactivation | ✅ |
| LLR_4 |Approach Light|	Button press 4 time | All LEDs ON Anticlockwise & Print Approach Light | All LEDs ON Anticlockwise & Print Approach Light| ✅ |
