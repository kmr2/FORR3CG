#include <iostream>
#include <string>

#include "Bilastaedi.h"


using namespace std;

int main() {
    Bilastaedi bst;
    bst.leggja(Bill(10, "BMW", "rauður"));
    bst.leggja(20, "Honda", "Grænn");
    Bill toyota(30, "Toyota", "Gulur");
    bst.leggja(toyota);
    bst.synaStaedi();

    Bill leita = bst.finnaBill(20);
    //bst.finnaBill(30).prenta();

    bst.synaBil(10);

    if(leita.getID() == 0) {
        std::cout << "fann ekki billin" << std::endl;
    } else {
        leita.prenta();
    }


  return 0; 
}
