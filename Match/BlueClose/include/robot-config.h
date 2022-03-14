#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"
//
vex::brain Brain;
vex::controller Controller1 = vex::controller();

//Set motor names and PORT locations.
//PORT locations can be changed to match actual PORT number without additional code changes
//*****IMPORTANT+++++++
  //  If you change names, you will also need to do so in the rest of the program!

// Drive Settings
    vex::motor DriveLeftFront = vex::motor(vex::PORT15);
    vex::motor DriveLeftRear = vex::motor(vex::PORT9);
    vex::motor DriveRightFront = vex::motor(vex::PORT10);
    vex::motor DriveRightRear = vex::motor(vex::PORT1);

// Lift Motors
    vex::motor LiftRight = vex::motor(vex::PORT12);


// Ball Punch Motors

 vex::motor BallPuncher = vex::motor(vex::PORT20);
 vex::motor BallPuncherRight = vex::motor(vex::PORT19);

 //Swiffer motor
 vex::motor Swiffer = vex::motor(vex::PORT2);

// Potentiometers

    vex::pot Pot = vex::pot(Brain.ThreeWirePort.B);
    vex::pot SwifferPot = vex::pot(Brain.ThreeWirePort.E);

//Limit Switches

    vex::limit PuncherLimit = vex::limit(Brain.ThreeWirePort.C);
    vex::limit PuncherLimitRight = vex::limit(Brain.ThreeWirePort.D);