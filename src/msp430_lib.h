// header functions

// gpio
void pinMode(int32_t pin, int32_t mode);
void digitalWrite(int32_t pin, bool value);
bool digitalRead(int32_t pin);

// heavy gpio
void portMode(int32_t port, char value);
void portWrite(int32_t port, char value);
void portRead(int32_t port, char value);

// adc
char analogRead(int32_t pin);

// pwm
void analogWrite(int32_t pin, char value);

// uart
void serialStart(int32_t baudRate);
char serialRead();
void serialWrite(char c);
void serialPrint(String s);

// i2c

// i2c