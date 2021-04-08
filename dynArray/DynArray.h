#pragma once

#include <iostream>

class DynArray{
    private:
        int* fylkid;
        int fjoldi;
        int staerd;
    public:
        DynArray();
        void add(int gogn);
        void prenta();
        ~DynArray();
};