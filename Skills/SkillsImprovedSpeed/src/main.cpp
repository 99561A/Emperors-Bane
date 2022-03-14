#include "robot-config.h"
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VCS VEX V5                    */
/*                                                                           */
/*---------------------------------------------------------------------------*/

//Creates a competition object that allows access to Competition methods.
vex::competition    Competition;

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */ 
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton( void ) {
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
  
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous( void ) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
 
    
   
  //Set Motor Velocities. This CAN be repeated within your program to change velocities.
    DriveLeftFront.setVelocity(120,vex::velocityUnits::rpm);
    DriveLeftRear.setVelocity(120,vex::velocityUnits::rpm);
    DriveRightFront.setVelocity(120,vex::velocityUnits::rpm);
    DriveRightRear.setVelocity(120,vex::velocityUnits::rpm);
    LiftRight.setVelocity(50,vex::velocityUnits::rpm);
 
    DriveLeftFront.rotateFor(.08, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(.08, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(.08, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(.08, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(1, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(1, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-1, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-1, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    LiftRight.rotateFor(0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
      
    BallPuncher.rotateFor(2.4,vex::rotationUnits::rev);
    
    DriveLeftFront.rotateFor(2, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(2, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-2, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-2, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(.3, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(.3, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(.3, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(.3, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(-0.2, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(-0.2, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-0.2, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-0.2, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(-1.25, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(-1.25, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(1.25, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(1.25, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
   
     
    
    DriveLeftFront.rotateFor(0.75, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(0.75, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(0.75, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(0.75, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
     
    LiftRight.rotateFor(-0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
      
    DriveLeftFront.rotateFor(1.25, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(1.25, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-1.25, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-1.25, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
     
    
    LiftRight.rotateFor(0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
      
    LiftRight.rotateFor(-0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
     
    DriveLeftFront.rotateFor(1, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(1, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(1, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(1, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
     
    DriveLeftFront.rotateFor(1.75, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(1.75, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-1.75, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-1.75, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
 
    DriveLeftFront.rotateFor(-0.85, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(-0.85, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-0.85, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-0.85, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(2, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(2, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-2, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-2, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
     
    
    LiftRight.rotateFor(0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
      
    LiftRight.rotateFor(-0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
     
   
    DriveLeftFront.rotateFor(-2.75, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(-2.75, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(2.75, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(2.75, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(0.85, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(0.85, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(0.85, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(0.85, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
   
    DriveLeftFront.rotateFor(2.25, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(2.25, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-2.25, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-2.25, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
     
    DriveLeftFront.rotateFor(-0.85, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(-0.85, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-0.85, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-0.85, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
   
    LiftRight.rotateFor(0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
 
 //Up onto platform
 //Set Motor Velocities. This CAN be repeated within your program to change velocities.
    DriveLeftFront.setVelocity(80,vex::velocityUnits::rpm);
    DriveLeftRear.setVelocity(80,vex::velocityUnits::rpm);
    DriveRightFront.setVelocity(80,vex::velocityUnits::rpm);
    DriveRightRear.setVelocity(80,vex::velocityUnits::rpm);
    LiftRight.setVelocity(50,vex::velocityUnits::rpm);

    DriveLeftFront.rotateFor(-.8, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(-.8, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(.8, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(.8, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.

    DriveLeftFront.rotateFor(6.15, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(6.15, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-6.15, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-6.15, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.


     
  
    
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

   void usercontrol( void ) {
  // User control code here, inside the loop
  while (1) {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo 
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to 
    // update your motors, etc.
    // ........................................................................
 
        //Drive Control
        //Set the left and right motor to spin forward using the controller Axis values as the velocity value.
        //To change which joystick controls your robots movement, you will need to change the "Axis#"
                //Left Joystick only, axis 3 and 4 respectively
                //Right Joystick only, axis 1 and 2 respectively
                //Left Joystick = forward backwards and right joystick =left right, axis 3 and 1 respectively
                //Rigt Joystick = forward backwards and left joystick =left right, axis 2 and 4 respectively
      
            DriveLeftFront.spin(vex::directionType::fwd, (Controller1.Axis3.value() + Controller1.Axis1.value())/2, vex::velocityUnits::pct); //(Axis3+Axis4)/2
            DriveLeftRear.spin(vex::directionType::fwd, (Controller1.Axis3.value() + Controller1.Axis1.value())/2, vex::velocityUnits::pct); //(Axis3+Axis4)/2

            DriveRightFront.spin(vex::directionType::rev, (Controller1.Axis3.value() - Controller1.Axis1.value())/2, vex::velocityUnits::pct);//(Axis3-Axis4)/2
            DriveRightRear.spin(vex::directionType::rev, (Controller1.Axis3.value() - Controller1.Axis1.value())/2, vex::velocityUnits::pct);//(Axis3-Axis4)/2
 
    
        //Lift Motors - Button R1=Up, Button R2=Down Speeds are set at 50%
            if(Controller1.ButtonR1.pressing()) { //If button up is pressed...
                //...Spin the lift motors up.
              //  LiftLeft.spin(vex::directionType::fwd, 20, vex::velocityUnits::pct);
                LiftRight.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
            }
            else if(Controller1.ButtonR2.pressing()) { //If the down button is pressed...
                //...Spin the arm motor backward.
            //    LiftLeft.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
                LiftRight.spin(vex::directionType::fwd, 30, vex::velocityUnits::pct);
          
            }
            else { //If the the X or B button is not pressed...
                //...Stop the lift motors.
             //   LiftLeft.stop(vex::brakeType::hold);
                LiftRight.stop(vex::brakeType::hold);
                
            }
        
        //Cap Flip Control - Left1 or Left2 Button=Flip 180 degrees, Speeds are set at 50%
     //       if(Controller1.ButtonL1.pressing()) { //If the Left 1 button is pressed...
                //...Spin the claw 180 degrees
     //           CapFlip.rotateFor(90,vex::rotationUnits::deg,50,vex::velocityUnits::pct);
                //"false" allows you to continue driving
     //       }
     //       else if(Controller1.ButtonL2.pressing()) { //If the Left 2 button is pressed...
                //...Spin the claw -180 degrees
     //           CapFlip.rotateFor(90,vex::rotationUnits::deg,-50,vex::velocityUnits::pct);
                //"false" allows you to continue driving
     //       }
     //       else { //If the Left 1 or 2 Buttons are not pressed...        
                //...Stop the claw motor.
     //           CapFlip.stop(vex::brakeType::hold);        
     //       }
   
        //Claw Control - Right1 Opens, Right2 Closes, Speed set at 50%
     //       if(Controller1.ButtonR1.pressing()) { //If the Right 1 button is pressed...
                //...Spin the claw motor forward.
     //           ClawMotor.spin(vex::directionType::fwd, 50, vex::velocityUnits::pct);
     //       }
     //       else if(Controller1.ButtonR2.pressing()) { //If the Y button is pressed...
                //...Spin the claw motor backward.
     //           ClawMotor.spin(vex::directionType::rev, 50, vex::velocityUnits::pct);
     //       }
     //       else { //If the A or Y button are not pressed...        
                //...Stop the claw motor.
     //           ClawMotor.stop(vex::brakeType::brake);        
     //       }
		vex::task::sleep(20); //Sleep the task for a short amount of time to prevent wasted resources.
    }

}

  


//
// Main will set up the competition functions and callbacks.
//
int main() {
    
    //Run the pre-autonomous function. 
    pre_auton();
    
    //Set up callbacks for autonomous and driver control periods.
    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );

    //Prevent main from exiting with an infinite loop.                        
    while(1) {
      vex::task::sleep(100);//Sleep the task for a short amount of time to prevent wasted resources.
    }    
       
}