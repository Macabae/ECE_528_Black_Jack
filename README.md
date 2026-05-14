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
|VCC                         |3.3V                         |
|Gnd                         |GND                         |
|SIOC                        |P6.5                         |
|SIOD                        |P6.5                         |
|VSYNC                       |P2.4                         |
|HREF                   | P2.6                         |
|PCLK                   |P2.7                         |
|XCLK                   |P2.4                         |
|D0                     |P4.1                         |
|D1                     |P4.2 
|D2                     |P4.3                         |
|D3                     |P4.4                          |
|D4
|D5
|D6
|D7
|Reset
|PWDN                        

## Future steps

  So the first step I need to take next to make this work is to be able to get the camera module to work with the robot. Once that is configured,
the next step would be to get the robot to recognize the value of the cards it recieved.  From there, I'm not sure how I would implement this, but 
I would like to program the robot to not get confused with the cards the dealer has and the cards the robot has. 
