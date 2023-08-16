// C++ code
//
int blueLed = 6;
int redLed = 7;
int greenLed = 5;

void setup()
{
    pinMode(blueLed, OUTPUT);
    pinMode(redLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
}

void loop()
{

    digitalWrite(greenLed, LOW);
    digitalWrite(blueLed, HIGH);

    delay(1000);

    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, HIGH);

    delay(1000);

    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);

    delay(1000);
}