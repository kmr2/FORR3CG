#pragma once

#include <iostream>
#include <string>

class Leikmenn {
    private:
        std::string nafn;
        int aldur;
        int leikir;
        int mörk;
    public:
        Leikmenn();
        Leikmenn(std::string nafn, int aldur, int leikir, int mörk);

        std::string getNafn();
        int getAldur();
        int getLeikir();
        int getMörk();

        void setNafn(std::string nafn);
        void setAldur(int aldur);
        void setLeikir(int leikir);
        void setMörk(int mörk);

        void prenta();
};