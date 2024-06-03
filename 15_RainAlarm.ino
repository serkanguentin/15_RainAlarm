int sensorPin = A0;                
int minValue = 250;             
int buzzerPin = 8;                 
int data;                          

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600);      
}
void loop() {
  data = analogRead(sensorPin);  
  Serial.println(data);// if we want to read the data, we can write here to specify the value
  delay(300); 
  if(data > minValue){          
    digitalWrite(buzzerPin, HIGH); 
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                           
    digitalWrite(buzzerPin, LOW);
  }
}
