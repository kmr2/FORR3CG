#include "DynArray.h"

DynArray::DynArray() {
    this->fjoldi = 0;
    this->staerd = 2;
    this->fylkid = new int[this->staerd];
}

void DynArray:: add(int gogn){
    if(this->fjoldi < this->staerd) {
        this->fylkid[this->fjoldi] = gogn;
        this->fjoldi++;
    } else {
        int* nyttFylki = new int[this->staerd + 2];
        for(int i = 0; i < this->staerd; i++) {
            nyttFylki[i] = this->fylkid[i];
        }
        delete [] this->fylkid;
        this->fylkid = nyttFylki;
        this->fylkid[this->fjoldi] = gogn;
        this->fjoldi++;
        //this->add(gogn);
    }
}

void DynArray:: prenta() {
    for(int i = 0; i < this->fjoldi; i++) {
        std::cout << this->fylkid[i] << " - ";
    }
    std::cout << std::endl;
}

DynArray::~DynArray() {
    std::cout << "Eyði fylkinu!" << std::endl;
    delete [] this->fylkid;
}