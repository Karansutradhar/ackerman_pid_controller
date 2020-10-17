/**
 * @file pidcontroller.cpp
 * @author Ajinkya Parwekar
 * @author Karan Sutradhar
 * @brief The pidcontroller.cpp file for Ackerman PID controller program.
 * It contains Ackerman PID controller class methods definitions.
 * @Copyright "Copyright 2020" <Ajinkya Parwekar>
 * @Copyright "Copyright 2020" <Karan Sutradhar>
 */


#include "pidcontroller.hpp"

/**
   * @brief Base Constructor for the PID Controller class.
   * @param None.
   * @return None.
   */

  pidController::pidController() {
  }

  /**
   * @brief Constructor for PID controller class with three gain parameters.
   * @param kp Proportional Gain of PID controller.
   * @param kd Differential Gain of PID controller.
   * @param ki Integral Gain of PID controller.
   * @return None.
   */

  pidController::pidController(double kpIn, double kdIn, double kiIn, double dtIn) {
    kp = kpIn;
    kd = kdIn;
    ki = kiIn;
    dt = dtIn;
  }

  /**
   * @brief Function to compute the output of the PID controller.
   * The output of the function is based on the three error values corresponding to three controller gains.
   * @param feedback value i.e. the actual value of the parameter being corrected.
   * @return controlAction Output calculated by the PID controller using the gain values.
   */

  double pidController::computeControlAction(double feedback, double setpoint) {
    // stub implementation
    return feedback+setpoint;
  }

  /**
   * @brief Function to change the time value.
   * @param newDt (new time value).
   * @return None.
   */

  void changeInTime(double newDt) {
  	//stub implementation
  	double test = newDt;
  }

  /**
   * @brief Function to set the proportional gain variable of the PID controller
   * @param kp (Proportional gain)
   * @return None.
   */

  void pidController::setKp(double kpIn) {
    kp = kpIn;
  }

  /**
   * @brief Function to set the differential gain variable of the PID controller
   * @param kd (Differential gain)
   * @return None.
   */

  void pidController::setKd(double kdIn) {
    kd = kdIn;
  }

  /**
   * @brief Function to set the integral gain variable of the PID controller
   * @param ki (Integral gain)
   * @return None.
   */

  void pidController::setKi(double kiIn) {
    ki = kiIn;
  }

  /**
   * @brief Function to set the time variable of the PID controller
   * @param dt (time variable)
   * @return None.
   */

  void pidController::setDt(double dtIn) {
  	dt = dtIn;
  }

  /**
   * @brief Function to get the proportional gain variable of the PID controller
   * @param None
   * @return kp (Proportional gain)
   */

  double pidController::getKp() {
      return kp;
  }

  /**
   * @brief Function to get the differential gain variable of the PID controller
   * @param None
   * @return kd (Differential gain)
   */

  double pidController::getKd() {
      return kd;
  }

  /**
   * @brief Function to get the integral gain variable of the PID controller
   * @param None
   * @return ki (Integral gain)
   */

  double pidController::getKi() {
      return ki;
  }

  /**
   * @brief Function to get the time variable value of the PID controller
   * @param None
   * @return dt (time variable)
   */

  double pidController::getDt() {
      return dt;
  }

  /**
   * @brief Function to compute the arc radius of the wheel from rotation point.
   * @param None.
   * @return arc radius.
   */

  double pidController::computeArcRadius() {
      // stub implementation
      return 0;
  }

  /**
   * @brief Function to compute the wheel velocities of both wheels.
   * @param None.
   * @return wheel velocity.
   */

  double pidController::computeWheelSpeed() {
      // stub implementation
      return 0;
  }

  /**
   * @brief Function to compute the steering angle for the wheel from rotation point.
   * @param steering angle, velocity of right wheel, velocity of left wheel and heading output.
   * @return steering angle.
   */

  double pidController::computeSteeringAngle(double steeringAngle, double rightWheelVelocity,
  double leftWheelVelocity, double headingOutput) {
      // stub implementation
      return steeringAngle + rightWheelVelocity + leftWheelVelocity + headingOutput;
  }

  /**
   * @brief Function to generate the throttle output value.
   * @param None.
   * @return throttle output value.
   */

  double throttleOutput() {
  	//stub implementation
  	return 0;
  }

  /**
   * @brief Function to set the setpoint values.
   * @param setpoint velocity and setpoint heading.
   * @return None.
   */

  void pidController::setSetPoints(double setpointSpeed, double setpointHeading) {
      double test1 = setpointSpeed;
      double test2 = setpointHeading;
  }

  /**
   * Destructor for PID controller
   * @param None.
   * @return None.
   */

  // ~pidController() {
  // }
