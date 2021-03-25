#pragma once

#include <iostream>
#include <string>

class Tolva {
    private:
        std::string nafn;
        std::string cpu;
        int minni;
        int hdd;
    public:
        Tolva();
        Tolva(std::string nafn, std::string cpu, int minni, int hdd);
        void setNafn(std::string nafn);
        void setCpu(std::string cpu);
        void setMinni(int minni);
        void setHdd(int hdd);
        std::string getNafn();
        std::string getCpu();
        int getMinni();
        int getHdd();
        void prenta();
};