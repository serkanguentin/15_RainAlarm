int sensorPin = A0;                
int esikDegeri = 250;             
int buzzerPin = 8;                 
int veri;                          

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600);      
}
void loop() {
  veri = analogRead(sensorPin);  
  Serial.println(veri);delay(300); 
  if(veri > esikDegeri){          
    digitalWrite(buzzerPin, HIGH); 
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                           
    digitalWrite(buzzerPin, LOW);
  }
}
