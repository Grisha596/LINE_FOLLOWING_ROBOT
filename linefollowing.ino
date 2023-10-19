//motor
int leftmotorpin1 = 12;
int leftmotorpin2 = 13;
int rightmotorpin1 = 10;
int rightmotorpin2 = 8;

//sensor pin
int leftsensorpin = 5;
int midsensorpin = 6;
int rightsensorpin = 7;

//sensor state
int leftsensorstate;
int midsensorstate;
int rightsensorstate;

void setup() {
  // put your setup code here, to run once:
  pinMode(leftmotorpin1, OUTPUT);
  pinMode(leftmotorpin2, OUTPUT);
  pinMode(rightmotorpin1, OUTPUT);
  pinMode(rightmotorpin2, OUTPUT);

  pinMode(leftsensorpin, INPUT);
  pinMode(midsensorpin, INPUT);
  pinMode(rightsensorpin, INPUT);

  Serial.begin(9600);

}