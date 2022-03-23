int redLED =11;
int button_pin =10;
int button_pinn =9;
int ledstatus =0;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(button_pin, INPUT);
  pinMode(button_pinn, INPUT);
}

void loop() {
  if(digitalRead(button_pin) == HIGH){
    delay(250);
    if (ledstatus==1){
      ledstatus =0;
    }else{
      ledstatus=1;
    }
  }
  
  if (digitalRead(button_pinn) == HIGH){
    delay(250);
    if (ledstatus==1){
      ledstatus =0;
    }else{
      ledstatus=1;
    }
  }
  
  if (ledstatus ==1){
    digitalWrite(redLED, HIGH);
  }
  if (ledstatus== 0){
    digitalWrite(redLED, LOW);
  }
 }
 


  
