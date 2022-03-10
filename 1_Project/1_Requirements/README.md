# RKE (Remote Keyless Entry) 

## Introduction :
  
Remote keyless entry (RKE) is an electronic access system that can be controlled from a distance. which are typically used to remotely lock or unlock doors, require the end user to initiate an action that will cause a physical or software key fob to transmit a radio signal to a receiver that controls an electronic lock. Typically, the action is to press a button on a physical fob or mobile app.Remote keyless entry, which is commonly used to protect vehicles from theft, can be contrasted with passive keyless entry (PKE), which does not require any action on the part of the end user. Most RKEs operate at a frequency of 315 MHz for North America-made cars and at 433.92 MHz for European, Japanese and Asian cars.A controller chip in the receiver changes the exact frequency required for RKE each time the lock is accessed, a security feature known as rolling code or hopping cod.

## Abstract :
 RKE systems for cars can be used to control the vehicle's ignition system, security alarm, horn, lights and trunk. RKEs are also used to control entry to premises and specific areas of buildings, such as garages. While the use of RKE is uncommon on buildings outside of businesses, some home automation and security systems rely on the technology as well.


# Requirements :
## High level Requirements :
|    HLR                        |              Description                  | Category   | 
 |-------------------------------|:------------------------------------------|------------|
 | HLR1                          | It shall Lock the door   | Technical |
 |  HLR2                        | It shall Unlock the door  | Technical |
 | HLR3                          |It shall activate or deactivate the alaram  | Technical |
 | HLR4                          | It shall approach the light | Technical |

 
## Low level Requirements:
|    LLR       |              Description                  |  Category   | 
|-------------------------------|------------------------------------------| ---------------- |
| LLR1 | The system shall lock the door when blue switch is pressed once |  Technical |
| LLR2 |The system shall unlock the door when blue switch is pressed twice |  Technical |
| LLR3 | The system shall activate the alarm when the blue switch is pressed three times|  Technical |
| LLR4 |The system shall approach the light when the blue switch is pressed four times|  Technical |
