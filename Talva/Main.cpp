#include <iostream>
#include <iomanip>

#include "Tolva.h"

int main7887() {

    std::cout << std::fixed << std::setprecision(2) << 0.33333 << std::endl;

    Tolva t;
    Tolva tolvur[5] = {
        Tolva("dell", "intel", 16 , 128),
        Tolva("Acer", "Amd", 32, 256),
        Tolva("Acel", "Intel", 2, 32),
        Tolva("Acer", "Celereon", 2 , 32)
    };
    tolvur[4] = Tolva("Lenovo", "Intel i7", 16, 512);
    int summa = 0;
    int staerd = sizeof(tolvur)/sizeof(*tolvur);
    for(int i = 0; i < staerd; i++) {
        tolvur[i].prenta();
        summa = summa + tolvur[i].getHdd();
    }
    std::cout << std::fixed << std::setprecision(2) << summa/(float)staerd << std::endl;

    return 0; 
}



