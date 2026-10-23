// Motor 1
// #define M1_LPWM 15
// #define M1_RPWM 2

// // Motor 2
// #define M2_LPWM 16
// #define M2_RPWM 14

// // Motor 3
// #define M3_LPWM 13
// #define M3_RPWM 27

// // Motor 4
// #define M4_LPWM 19
// #define M4_RPWM 23

//Temporary Ashmit PCB Drive

// Motor 3
#define M3_LPWM 25
#define M3_RPWM 26

// Motor 4
#define M2_LPWM 33
#define M2_RPWM 32

// Motor 1
#define M4_LPWM 12
#define M4_RPWM 13

// Motor 2
#define M1_LPWM 14
#define M1_RPWM 27


//Motor Driver Objects;
BTS7960 motor1(M1_LPWM, M1_RPWM);
BTS7960 motor2(M2_LPWM, M2_RPWM);
BTS7960 motor3(M3_LPWM, M3_RPWM);
BTS7960 motor4(M4_LPWM, M4_RPWM);

Drive bot(&motor1, &motor2, &motor3, &motor4);


// I2C pins
#define Sda 21
#define Scl 22

// Global instances
Pwm pwm;    
BnoReading bnoreading;
float ref_angle;
Velocity velocity;  // Velocity commands from ROS