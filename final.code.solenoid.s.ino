int solenoidPin = 9;                    

void setup() 
{
  pinMode(solenoidPin, OUTPUT);      
  Serial.begin(9600);    
}

void loop() 
{
  int randTime = random(2000, 5000);

  digitalWrite(solenoidPin, HIGH);      
  delay(randTime);                         
  digitalWrite(solenoidPin, LOW);       
  delay(randTime);   

  Serial.println(randTime); 
}

