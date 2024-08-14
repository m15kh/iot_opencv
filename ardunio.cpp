#include<Arduino.h>
String dataread ;
int a=2,b=5,c=16,d=0,e=4,f=12,g=14;

void condition(String n);
void resetall();
void setup(){
    Serial.begin(115200);

    
    pinMode(a,OUTPUT);
    pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
    pinMode(d,OUTPUT);
    pinMode(e,OUTPUT);
    pinMode(f,OUTPUT);
    pinMode(g,OUTPUT);

    resetall();
    
}
void loop() {
    while (Serial.available()> 0){
        dataread = Serial.readStringUntil( '\n');
        condition(dataread); 

    }

    
}

void condition(String n){
    resetall();
    if (n=="0"){
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);  
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
        Serial.println("zero");


    }
    else if(n == "1"){
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);  
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        Serial.println("one");
      


    }
    else if(n=="2"){    
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);  
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
        Serial.println("two");
        


    }
    else if(n=="3"){    
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);  
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
        Serial.println("three");
      


    }
    else if(n=="4"){    
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);  
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        Serial.println("four");
       


    }
    else if(n=="5"){    
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);  
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        Serial.println("five");
        


    }
}

void resetall(){
    
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);  
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    
    
    }
