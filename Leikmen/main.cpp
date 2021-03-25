#include <iostream>
#include <string>
#include <iomanip>

#include "Leikmenn.h"



int main() {
    Leikmenn leikmenn[5];
    leikmenn[0] = Leikmenn("Stjáni Blái",29,5,2);
    leikmenn[1] = Leikmenn("Rikki Littli",12,1,1);
    leikmenn[2] = Leikmenn("Karl Vignir",20,3,5);
    leikmenn[3] = Leikmenn("Svavar Svanni",24,15,9);
    leikmenn[4] = Leikmenn("Gamli kalin",70,80,25);

    int staerd = sizeof(leikmenn)/sizeof(*leikmenn);
    for(int i = 0; i < staerd; i++) {
        leikmenn[i].prenta();
    }

    /*
    Bill bilar[3];
    Bill b(20,"BMW","Grænn");
    bilar[0] = b;
    bilar[1] = Bill(25, "Toyota", "Gul");
    bilar[2] = Bill(35,"Benz","Grár");
    for(int i = 0; i < 3; i++) {
        bilar[i].prenta();
    }
    */
  return 0; 
}