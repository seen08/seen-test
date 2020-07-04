int led_red_car = 13;
int led_yellow_car = 12;
int led_green_car = 11;
int led_red_pep = 10;
int led_green_pep = 9;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() { 
  digitalWrite(led_red_pep, HIGH);
  digitalWrite(led_green_car, HIGH);   
  delay(3000);                      
  digitalWrite(led_green_car, LOW);
  digitalWrite(led_yellow_car, HIGH);    
  delay(1000);
  digitalWrite(led_yellow_car, LOW);
  digitalWrite(led_red_car, HIGH);
  digitalWrite(led_green_pep, HIGH);
  digitalWrite(led_red_pep, LOW);
  delay(2000);         
  digitalWrite(led_green_pep, LOW);
  digitalWrite(led_red_pep, HIGH);
  digitalWrite(led_red_car, LOW);
  
}              
