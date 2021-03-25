#include "Tolva.h"

Tolva::Tolva() {
    this-> cpu = "";
    this-> nafn = "";
    this-> minni = 0;
    this-> hdd = 0;
}

Tolva::Tolva(std::string nafn, std::string cpu, int minni, int hdd) {
    this->cpu = cpu;
    this->nafn = nafn;
    this->minni = minni;
    this->hdd = hdd;
}

void Tolva::setNafn(std::string nafn) {
    this->nafn = nafn;
}

void Tolva::setCpu(std::string cpu) {
    this->cpu = cpu;
}

void Tolva::setMinni(int minni) {
    this->minni = minni;
}
void Tolva::setHdd(int hdd) {
    this->hdd = hdd;
}
std::string Tolva::getNafn() {
    return this->nafn;
}
std::string Tolva::getCpu() {
    return this->cpu;
}
int Tolva::getMinni() {
    return this->minni;
}
int Tolva::getHdd() {
    return this->hdd;
}
void Tolva::prenta() {
    std::cout << "Nafn: " << this->nafn << ", Cpu: " << this->cpu << ", Minni: " << this->minni << "GB, HDD: " << this->hdd << "GB" << std::endl;
}