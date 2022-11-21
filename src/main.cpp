// Código Passeando no Array by Victor Ravani 

#include <Arduino.h>

int i =0, p=0 ;


 byte meusPinos [5] [5] = {{1, 2, 3, 4, 5},
                           {6, 7, 8, 9, 10},
                           {11, 12, 13, 14, 15},
                           {16, 17, 18, 19, 20},
                           {21, 22, 23, 24, 25}
                           };

void setup() {

  Serial.begin(9600);

}

void loop() {



if(p == 5) {
  p =0;
  i++;
  if(i == 5) i=0;
}

Serial.println(meusPinos[i][p]);

delay(1000);

p++;

}