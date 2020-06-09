#include <SimpleDHT.h>


int const pinSensore1 = A0;
int const pinSensore2 = A2;
int const DHTPIN = 8;

typedef struct dato{
   int umidita1,umidita2;
   byte temperatura, umidita_aria;
}Dato;

int err;
SimpleDHT11 dht11;
Dato dato ; 


void acquisizione_dati();
void scrittura_dati();


void setup() {

  Serial.begin(9600);

}

void loop() {
 
  acquisizione_dati();
  scrittura_dati();
  
  delay(2500);
}

void acquisizione_dati(){

  dato.umidita_aria = 0;
  dato.temperatura = 0;
  err = SimpleDHTErrSuccess;

  dato.umidita1 = analogRead(pinSensore1);
  dato.umidita2 = analogRead(pinSensore2);


  //if ((err = dht11.read(DHTPIN, &temp, &umid, NULL)) != SimpleDHTErrSuccess) {


     if((err = dht11.read(DHTPIN, &dato.temperatura, &dato.umidita_aria, NULL) != SimpleDHTErrSuccess )){
      Serial.print("Read DHT11 failed, err="); 
      Serial.println(err);
      delay(2500);
      while(true);
    }
    
}

void scrittura_dati(){

    Serial.println(dato.umidita1);
    Serial.println(dato.umidita2);
    Serial.println((int)dato.temperatura);
    Serial.println((int)dato.umidita_aria);
    
 }
