//dc_motor.c
GLOBAL void vDcMotor_Init(void);

//encoder.c
GLOBAL void vEncoder_Init(void);

//servo.c
GLOBAL void vKServo_Init(void);

//uart1.c
GLOBAL void vUart1_Init(void);

//ultrasonic.h
GLOBAL void vUltraSonic_Init(void);

//tsprintf.c
GLOBAL void tsprintf(char* ,char* , ...);
GLOBAL int vtsprintf(char* buff,char* fmt,va_list arg);

//debug.c
GLOBAL void vDebug_Init(void);
