#include <iostream>

using namespace std;

struct StructNafn {
    public: //ósynilegt public í struct 
    private:
};

class Klasanafn {
  private: //ósynilegt private í class
      int i;
      int j;
  public:
      Klasanafn() {
        this->i = 0;
        this->j = -1;
      }

      Klasanafn(int i, int j) {
          this->i = i;
          if(j!=0) {
            this->j = j;
          } else {
            this->j = -1;
          }
      }

      int getI() { return this->i; }
      void setI(int i) { this->i = i; }

      int getJ() { return this->j; }
      void setJ(int j) {
        if(j!=0) {
          this->j = j;
        } else
          this->j = -1;
      }

      int reikna() {
        return i / j;
      }

      void prenta() {
        cout << "I: " << this->i << " - j: " << this->j << endl;
      }
};

int main412() {
Klasanafn k(99, 102); //stafl
k.setI(20);
k.prenta();

Klasanafn* k_ptr = new Klasanafn(56, 31); // heap
cout << k_ptr->getI() << endl;
k.setJ(2222);
k.prenta();

 return 0; 
}



