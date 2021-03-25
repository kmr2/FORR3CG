#pragma once

#include <iostream>
#include <string>

class Bill {
    private:
        int id;
        std::string tegund;
        std::string litur;
  public:
    Bill();
    Bill(int id, std::string tegund, std::string litur);
    
    int getID();
    std::string getTegund();
    std::string getLitur();

    void setLitur(std::string litur);
    void setTegund(std::string tegund);
    void setID(int id);

    void prenta();
};