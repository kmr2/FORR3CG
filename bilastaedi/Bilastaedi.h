#pragma once

#include <iostream>
#include <string>
#include "Bill.h"

class Bilastaedi{
    private: 
        Bill* bilar;
        int fjoldi;
        int staerd;
    public:
        Bilastaedi();
        Bilastaedi(int upphafsstaerd);
        void leggja(Bill b);
        void leggja(int id, std::string tegund, std::string litur);
        Bill finnaBill(int id);
        void afleggja(int id);
        int finnaLaustStaedi();
        void synaStaedi();
        bool erAStaedi(int id);
        void synaBil(int id);
        ~Bilastaedi();
};