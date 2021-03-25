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
    int summa = 0;
    int staerd = sizeof(leikmenn)/sizeof(*leikmenn);
    for(int i = 0; i < staerd; i++) {
        leikmenn[i].prenta();
        summa += leikmenn[i].getLeikir();
    }
    std::cout << "-----------------------------" << std::endl;

    std::cout << "Meðaltal alla leikmennina er " << std::fixed << std::setprecision(2) << summa/(float)staerd << std::endl;

  return 0; 
}