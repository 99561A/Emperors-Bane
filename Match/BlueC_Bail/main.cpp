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
    DriveLeftFront.setVelocity(70,vex::velocityUnits::rpm);
    DriveLeftRear.setVelocity(70,vex::velocityUnits::rpm);
    DriveRightFront.setVelocity(70,vex::velocityUnits::rpm);
    DriveRightRear.setVelocity(70,vex::velocityUnits::rpm);
    LiftRight.setVelocity(50,vex::velocityUnits::rpm);
 
  
    LiftRight.rotateFor(0.40,vex::rotationUnits::rev);  // +1 rotation (this motor is NOT "reversed" above.) 
      
   
    DriveLeftFront.rotateFor(.05, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(.05, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(.05, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(.05, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(1, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(1, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-1, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-1, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
   
    BallPuncher.rotateFor(2.4,vex::rotationUnits::rev);
    
    
    DriveLeftFront.rotateFor(2, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(2, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(-2, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(-2, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    
    DriveLeftFront.rotateFor(0.3, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(0.3, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(0.3, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(0.3, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
    
    DriveLeftFront.rotateFor(-2, vex::rotationUnits::rev, false); //Rotates the left front motor 1.5 revolution, and is not blocking.
    DriveLeftRear.rotateFor(-2, vex::rotationUnits::rev, false); //Rotates the left rear motor 1.5 revolution, and is not blocking.
    DriveRightFront.rotateFor(2, vex::rotationUnits::rev, false); //Rotates the right front motor 1.5 revolution, and is not blocking.
    DriveRightRear.rotateFor(2, vex::rotationUnits::rev); //Rotates the right rear motor 1.5 revolution, and IS blocking.
   
     
    
   

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
 
      int ArmAngle = Pot.value(vex::rotationUnits::deg);
      int SwifferAngle = SwifferPot.value(vex::rotationUnits::deg);
     
      
    
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
 
        //Platform Braking
         
            if (Controller1.ButtonL2.pressing()){
                DriveLeftFront.stop(vex::brakeType::hold);
                DriveLeftRear.stop(vex::brakeType::hold);
                DriveRightFront.stop(vex::brakeType::hold);
                DriveRightRear.stop(vex::brakeType::hold);
            }
      
            else {
                DriveLeftFront.setStopping(vex::brakeType::coast);
                DriveLeftRear.setStopping(vex::brakeType::coast);
                DriveRightFront.setStopping(vex::brakeType::coast);
                DriveRightRear.setStopping(vex::brakeType::coast);               
            }

    
     //Lift Motors
            if(Controller1.ButtonUp.pressing()) { //If button up is pressed...
                //...Spin the lift motors up.
                //LiftLeft.spin(vex::directionType::fwd, 20, vex::velocityUnits::pct);
                LiftRight.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
            }
            else if(Controller1.ButtonDown.pressing()) { //If the down button is pressed...
                //...Spin the arm motor backward.
                //LiftLeft.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
                LiftRight.spin(vex::directionType::fwd, 30, vex::velocityUnits::pct);
            }
         //Down Position
            else if (Controller1.ButtonR1.pressing() && ArmAngle > 50) {
                LiftRight.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
            }   
            else if (Controller1.ButtonR1.pressing() && ArmAngle <= 50) {
                LiftRight.stop(vex::brakeType::hold);
            }
         //Middle Position
            else if (Controller1.ButtonR2.pressing() && ArmAngle < 103) {
               LiftRight.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
            }
            else if (Controller1.ButtonR2.pressing() && ArmAngle >111) {
                LiftRight.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
            }
            else if (Controller1.ButtonR2.pressing() && ArmAngle >=102 && ArmAngle <= 112){
                LiftRight.stop(vex::brakeType::hold);
            }
         //Top Position
            else if (Controller1.ButtonL1.pressing() && ArmAngle < 170) {
               LiftRight.spin(vex::directionType::fwd, 50, vex::velocityUnits::pct);
            }
            else if (Controller1.ButtonL1.pressing() && ArmAngle >180) {
                LiftRight.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
            }
            else if (Controller1.ButtonL1.pressing() && ArmAngle >=171 && ArmAngle <= 179){
                LiftRight.stop(vex::brakeType::hold);
            }      
            else { //If the the R1 or R2 button is not pressed...
                //...Stop the lift motors.
                //LiftLeft.stop(vex::brakeType::hold);
                LiftRight.stop(vex::brakeType::hold);
                
            }
        
      //Ball Puncher - Left Original
      
        if (Controller1.ButtonY.pressing()){
          BallPuncher.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
            }
           
        else if (PuncherLimit.pressing() && Controller1.ButtonY.pressing()){
          BallPuncher.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
            }
      
        else if (PuncherLimit.pressing()){
            BallPuncher.stop(vex::brakeType::hold);
        }
       
        else {
            BallPuncher.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
        }
      
      // Ball Puncher Right
       if (Controller1.ButtonA.pressing()){
          BallPuncherRight.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
        }
           
       else if (PuncherLimitRight.pressing() && Controller1.ButtonA.pressing()){
          BallPuncherRight.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
       }
       
       else if (PuncherLimitRight.pressing()){
           BallPuncherRight.stop(vex::brakeType::hold);
       }
        else {
            BallPuncherRight.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
        }
   
      
  //Swiffer
      // With swiffer in full up position, potentiometer should read between 215-220     
      
     //Swiffer up
      if (Controller1.ButtonX.pressing() && SwifferAngle < 230){
          Swiffer.spin(vex::directionType::fwd, 30, vex::velocityUnits::pct);
         // Swiffer.stop(vex::brakeType::coast);
      }
      
     //Swiffer down
      else if (Controller1.ButtonB.pressing() && SwifferAngle > 20){
          Swiffer.spin(vex::directionType::rev, 100 , vex::velocityUnits::pct);
      }
    // Swiffer Neutral Position 
      else if (SwifferAngle < 135){
          Swiffer.spin(vex::directionType::fwd, 10, vex::velocityUnits::pct);
      }
      
      else if (SwifferAngle > 145) {
          Swiffer.spin(vex::directionType::rev, 5, vex::velocityUnits::pct);
      }
      
      else {
          Swiffer.stop(vex::brakeType::hold);
      }
  
      
      
      Brain.Screen.clearScreen();
     // Brain.Screen.print ("Arm %f Degrees", Pot.value(vex::rotationUnits::deg));
      Brain.Screen.printAt (1, 20, "Swiffer %f Degrees", SwifferPot.value(vex::rotationUnits::deg));
      
      
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
