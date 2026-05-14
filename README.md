# Introduction

  This is a project for the ECE 528 robotics class. The project I wanted to make for this assignment was supposed to be a gambling robot. 
Well, more like a black jack playing robot. 

## The idea

  The idea of the robot was supposed to be that it can play the game of black jack. It would use a camera in order to take in values from the cards it received. 
From there, the robot would add up the sum of the two cards it intially received and would then decide whether it wanted to continue hitting for more cards or stay 
at where it currently was, depending on its cards it received. For the decision part, I think that an if loop would work, basically saying if cards = 17 stay, or 
else hit. If the robot won the game of black jack, it would spin to celebrate. If not, it would spin a bit more eradically, showing that it was "upset" for losing.
I also wanted to implement an LCD to the robot, so that it would be able to show the summed value of its cards and also how much it was willing to bet for the game.

## The progress so far

  As of right now, the robot is still in a pretty rough state. I was unable to figure out how to properly setup the camera module with the robot. 

## Pinout and supplies used

  I wasn't able to implement all the features I wanted, so I will list only the things I did use.
  
-------------------------------------------------------
| Component List             |      Quantity           |
|----------------------------|-------------------------|
|MSP432p401r                 |    1                    |
|OV7670                      | 1                       |
|Ti_RSLK_max_chassis_board   | 1                       |


-------------------------------------------------------
| Pin name                   |MSP432 pin number        |
|----------------------------|-------------------------|
|VCC                         |3.3V                     |
|Gnd                         |GND                      |
|SIOC                        |P6.5                     |
|SIOD                        |P6.5                     |
|VSYNC                       |P2.4                     |
|HREF                        |P2.6                     |
|PCLK                        |P2.7                     |
|XCLK                        |P2.4                     |
|D0                          |P4.1                     |
|D1                          |P4.2                     |
|D2                          |P4.3                     |
|D3                          |P4.4                     |
|D4                          |P4.5                     |
|D5                          |P4.6                     |
|D6                          |P4.7                     |
|D7                          |P5.0                     |
|Reset                       |P5.1                     |
|PWDN                        |P5.2                     |

## Future steps

  So the first step I need to take next to make this work is to be able to get the camera module to work with the robot. Once that is configured,
the next step would be to get the robot to recognize the value of the cards it recieved. From there, I'm not sure how I would implement this, but 
I would like to program the robot to not get confused with the cards the dealer has and the cards the robot has. This is important because typically,
black jack is played with at least two people, the person betting, and the dealer. It needs to see the dealers cards as a reference as to whether or not
it is winning or losing. Sure if the robot hits over 21, then that will be an automatic loss, but if the robot stays at a certain card value, and the dealer
has a higher card value than the robot, the robot needs to recongize that as a loss. I would also like to implement an LCD so that it can display the sum of 
the cards it has. After the robot is able to count the value of its cards, can discern wether or not the dealer beat it or it just had bad luck and lost, 
I would like to implement, for a lack of better terms, a celebration feature and a upset feature. The celebration feature will activate when it wins and
will cause the robot to spin around as if it were happy. The upset feature would activate whenever the robot loses and would make the robot spin back and forth, 
as if it was in despair for losing its hard earned money. 

## Conclusion

  I think this project can have a lot of potential. Now that I no longer have access to the robot, I think that I will venture into my own endeavors and
try to make a similar setup to the robot. Instead of using the materials that were provided to me from the lab, I want to obtain a 3d printer to be able
to print out a chassis for the robot. I would also like to get two motors and wheels for the motors so that the robot can spin around. I also need my own mcu
and camera module so that the robot can have a brain and can use all the supplise I mentioned in order to become a gambling robot.
