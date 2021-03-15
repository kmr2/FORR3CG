#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {

  int val;
  cout << "Talnakerfisbryetir\n";
  int j =  99;
  do {

cout << "1 - Breyta í tvíundakerfið\n" <<
   "2 - Breyta í áttundakerfið\n" <<
   "3 - Breyta í sextándakerfið\n" <<
   "0 - Hætta\n" <<
   "Veldu aðgerð: ";
  int tala = 0;
  cin >> j;
  switch (j) {
    case 1:
      cout << "Sláðu inn tugakerfistölu: ";
      cin >> tala;
      cout << "Tugakerfistalan " << tala << " er " << bitset<16>(tala) << " í tvíundakerfinu\n";
      cout << dec;
      break;

    case 2:
      cout << "Sláðu inn tugakerfistölu: ";
      cin >> tala;
      cout << "Tugakerfistalan " << tala << " er " << hex << tala << " í áttundakerfinu\n";
      cout << dec;
      break;
    case 3:
      cout << "Sláðu inn tugakerfistölu: ";
      cin >> tala;
      cout << "Tugakerfistalan " << tala << " er " << oct << tala << " í sextándakerfinu\n";
      cout << dec;
      break;
    case 0: //if
      cout << "Takk fyrir notkun\n";
      break;
    default: //else
      cout << "Rangt val, reyndu aftur.\n";
      break;
  }

  }while(j!=0);


  

return 0;
}