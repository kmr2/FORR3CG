#include "Leikmenn.h"

Leikmenn::Leikmenn() {
    this->nafn = "";
    this->aldur = 0;
    this->leikir = 0;
    this->mörk = 0;
}
Leikmenn::Leikmenn(std::string nafn, int aldur, int leikir,int mörk) {
    this->nafn = nafn;
    this->aldur = aldur;
    this->leikir = leikir;
    this->mörk = mörk;
}

std::string Leikmenn::getNafn() {
    return this->nafn;
}
int Leikmenn::getAldur() {
    return this->aldur;
}
int Leikmenn::getLeikir() {
    return this->leikir;
}
int Leikmenn::getMörk() {
    return this->mörk;
}

void Leikmenn::setNafn(std::string nafn) {
    this->nafn = nafn;
}
void Leikmenn::setAldur(int aldur) {
    this->aldur = aldur;
}
void Leikmenn::setLeikir(int leikir) {
    this->leikir = leikir;
}
void Leikmenn::setMörk(int mörk) {
    this->mörk = mörk;
}

void Leikmenn::prenta() {
    std::cout << "Nafn: " << this->nafn << ", Aldur: " << this->aldur 
    << " Leikfjöldi: " << this->leikir << " Markfjöldi: " << this->mörk << std::endl;

}
