#include <iostream>
#include <string>

#include "Bill.h"

using namespace std;

int main7686876() {
    Bill bilar[3];
    Bill b(20,"BMW","Grænn");
    bilar[0] = b;
    bilar[1] = Bill(25, "Toyota", "Gul");
    bilar[2] = Bill(35,"Benz","Grár");
    for(int i = 0; i < 3; i++) {
        bilar[i].prenta();
    }

  return 0; 
}