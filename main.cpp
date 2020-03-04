#include "mbed.h"
#include "MotorTeam.h"

#define TI 0.001
#define KP 1.0f
#define KI 1.0f


#define LEFT_MOTOR_PIN  PTD5
#define LEFT_TACH_PIN   PTB3
#define LEFT_CNTRL_PIN  PTB0

#define RIGHT_MOTOR_PIN PTD0
#define RIGHT_TACH_PIN  PTC2
#define RIGHT_CNTRL_PIN PTB1

#define TACH_SCALE      694.4444
#define PWM_FREQ        20.0e3

using namespace MotorTeam;

Ticker run;

PIController motorSpeed( KP, KI, TI )

void RUN( void );

int main() 
{
    run.attach( &RUN, TI )
}

void RUN( void )
{
    
}
