 int c = 10;
void setup() {
  // put your setup code here, to run once:

 pinMode(D0,OUTPUT);
 pinMode(D1,OUTPUT);
 pinMode(D2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  while(c >1){
    if(c == 10){
      digitalWrite(D0,HIGH);
      delay(3000);
      digitalWrite(D0,LOW);
      //delay(7000);
      c = 7;
      }
        if(c == 7){
          digitalWrite(D1,HIGH);
          delay(2000);
          digitalWrite(D1,LOW);
         // delay(8000);
          c = 5;
          }
            if(c == 5){
              digitalWrite(D2,HIGH);
              delay(5000);
              digitalWrite(D2,LOW);
              //delay(5000);
              c = 0;
              }
            
      }
    c = 10;
    }
