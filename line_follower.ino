#define speedd 11
#define forward 9 
#define backword 8
#define speedd2 10
#define forward2 7
#define backword2 6
int ir_left ; 
int ir_right ;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
  pinMode(speedd , OUTPUT);
  pinMode(forward, OUTPUT);
  pinMode(backword , OUTPUT);
  pinMode(speedd2 , OUTPUT);
  pinMode(forward2 , OUTPUT);
  pinMode(backword2 , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  ir_left = analogRead(A0);
  ir_right = analogRead(A1);
  Serial.println(ir_left);  
  Serial.println(ir_right);

  
  if (ir_left < 500 && ir_right < 500){
    analogWrite(speedd , 100);
    analogWrite(speedd2 , 100);
    digitalWrite(forward , LOW);
    digitalWrite(backword , HIGH);
    digitalWrite(forward2 , LOW);
    digitalWrite(backword2 , HIGH);

  }
  
  
  

  else if(ir_right > 1000){
    Serial.println("0left");
    analogWrite(speedd2 , 90);
    digitalWrite(forward , LOW);
    digitalWrite(backword , LOW);
    analogWrite(speedd , 70);
    digitalWrite(forward2 , LOW);
    digitalWrite(backword2 , HIGH);
    
     
    
    }
  
  else if(ir_left > 1000){
    analogWrite(speedd , 90);
    Serial.println("right");
     analogWrite(speedd2 , 70);
    digitalWrite(forward ,LOW);
    digitalWrite(backword , HIGH);
    digitalWrite(forward2 , LOW);
    digitalWrite(backword2 , LOW);
  }
  }
