// define the pin and variable
  int trigPin1 = 3;
  int echoPin1 = 4;

  int trigPin2 = 6;
  int echoPin2 = 7; 

  int trigPin3 = 8;
  int echoPin3 = 9;
  
  int trigPin4 = 11;
  int echoPin4 = 12;

  double duration1, cm1;
  double duration2, cm2;
  double duration3, cm3;
  double duration4, cm4;

void setup() {
  Serial.begin (115200);
  pinMode (trigPin1, OUTPUT);
  pinMode (echoPin1, INPUT);
    pinMode (trigPin2, OUTPUT);
    pinMode (echoPin2, INPUT);
      pinMode (trigPin3, OUTPUT);
      pinMode (echoPin3, INPUT);
        pinMode (trigPin4, OUTPUT);
        pinMode (echoPin4, INPUT);
}

void loop() {
  //Define working loop for sensor 1
  digitalWrite (trigPin1, LOW);
  delayMicroseconds (5);
  digitalWrite (trigPin1, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin1, LOW);
  pinMode (echoPin1, INPUT);
    duration1 = pulseIn (echoPin1, HIGH);
    cm1 = (duration1/2)/29.1;
      
  //Define working loop for sensor 2     
  digitalWrite (trigPin2, LOW);
  delayMicroseconds (5);   
  digitalWrite (trigPin2, HIGH);  
  delayMicroseconds (10); 
  digitalWrite (trigPin2, LOW);
  pinMode (echoPin2, INPUT);
    duration2 = pulseIn (echoPin2, HIGH);
    cm2 = (duration2/2)/29.1;

  //Define working loop for sensor 3     
  digitalWrite (trigPin3, LOW);
  delayMicroseconds (5);   
  digitalWrite (trigPin3, HIGH);  
  delayMicroseconds (10); 
  digitalWrite (trigPin3, LOW);
  pinMode (echoPin3, INPUT);
    duration3 = pulseIn (echoPin3, HIGH);
    cm3 = (duration3/2)/29.1;

  //Define working loop for sensor 4     
  digitalWrite (trigPin4, LOW);
  delayMicroseconds (5);   
  digitalWrite (trigPin4, HIGH);  
  delayMicroseconds (10); 
  digitalWrite (trigPin4, LOW);
  pinMode (echoPin4, INPUT);
    duration4 = pulseIn (echoPin4, HIGH);
    cm4 = (duration4/2)/29.1;
       
  //define output
  Serial.print ("sensor 1: ");
  Serial.print (cm1);
  Serial.print (" cm; ");
    Serial.print ("sensor 2: ");
    Serial.print (cm2);
    Serial.print (" cm; ");
      Serial.print ("sensor 3: ");
      Serial.print (cm3);
      Serial.print (" cm; ");
        Serial.print ("sensor 4: ");
        Serial.print (cm4);
        Serial.print (" cm; ");
  
  Serial.println ();

  delay (250);
}
