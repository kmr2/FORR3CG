#include "Bilastaedi.h"

//Bill* bilar;
//int fjoldi;
//int staerd;

Bilastaedi::Bilastaedi() {
    this->fjoldi = 0;
    this->staerd = 2;
    this->bilar = new Bill[this->staerd];
    //this->bilar = new Bill[2];
}

Bilastaedi::Bilastaedi(int upphafsstaerd) {
    this->fjoldi = 0;
    this->staerd = upphafsstaerd;
    this->bilar = new Bill[this->staerd];

}

void Bilastaedi::leggja(Bill b) {
    if(this->erAStaedi(b.getID())) {
        return;
    }
    int index = this->finnaLaustStaedi();
    if(index != -1) {
        this->bilar[index] = b;
        this->fjoldi++;
    } else {
        Bill* nyttBilastaedi = new Bill[this->staerd + 2];
        for(int i = 0; i < this->staerd; i++) {
            nyttBilastaedi[i] = this->bilar[i];
        }
        delete [] this->bilar;
        this->bilar = nyttBilastaedi;

        this->bilar[this->staerd] = b;
        this->staerd += 2;
        this->fjoldi++;
    }
}

void Bilastaedi::leggja(int id, std::string tegund, std::string litur) {
    Bill nyrBill(id, tegund, litur);
    this->leggja(nyrBill);

    //this->leggja(Bill(id, tegund, litur));
}

bool Bilastaedi::erAStaedi(int id) {
    if(this->finnaBill(id).getID() == 0) {
        return false;
    } else {
        return true;
    }
}

Bill Bilastaedi::finnaBill(int id) {
    for (int i = 0; i < this->staerd; i++) {
        if(this->bilar[i].getID() == id) {
            return this->bilar[i];
        }
    }
    return Bill();
}

void Bilastaedi::afleggja(int id) {
    for(int i = 0; i < this->staerd; i++) {
        if(this->bilar[i].getID() == id) {
            this->bilar[i] = Bill();
            this->fjoldi--;
        }
    }

}

int Bilastaedi::finnaLaustStaedi() {

    for(int i = 0; i < this->staerd; i++) {
        if(this->bilar[i].getID() == 0)
        return i;
    }
    return -1;
}

void Bilastaedi::synaStaedi() {
    for(int i = 0; i < this->staerd; i++) {
        if(this->bilar[i].getID() != 0) {
            this->bilar[i].prenta();
            } else {

                std::cout << "Laust staedi" << std::endl;
            }
    }
}

void Bilastaedi::synaBil(int id) {
    bool waf = false;
        for(int i = 0; i < this->staerd; i++) {
        if(this->bilar[i].getID() == id) {
            this->bilar[i].prenta();
            waf = true;
            }
        }
    if(waf == false) {
        std::cout << "Bill ekki til" << std::endl;
        }
    }


Bilastaedi::~Bilastaedi() {

}