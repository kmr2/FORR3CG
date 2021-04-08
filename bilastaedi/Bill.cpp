#include "Bill.h"

Bill::Bill() {
    this-> id = 0;
    this-> litur = "";
    this-> tegund = "";
}
Bill::Bill(int id, std::string tegund, std::string litur) {
    this->id = id;
    this->tegund = tegund;
    this->litur = litur;
}
int Bill::getID() { 
    return this->id; 
}

std::string Bill::getLitur() { 
    return this->litur; 
}

std::string Bill::getTegund() { 
    return this->tegund;
}

void Bill::setID (int id) {
    this->id = id;
}

void Bill::setTegund (std::string tegund) {
    this->tegund = tegund;
}

void Bill::setLitur (std::string litur) {
this->litur = litur;
}

void Bill::prenta() {
    std::cout << "ID: " << this->id << ", tegund: " << this->litur << ", litur: " << this->tegund << std::endl;
}