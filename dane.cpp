#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void synaFylki(int* fylkid, int staerd) {
  staerd = sizeof(fylkid)/4;
  for(int i=0; i<staerd; i++) {
    //cout << fylkid[i] << " ";
    //cout << *fylkid << " ";
    cout << *fylkid++ << " ";

  }
}

int leggjaSaman(int a,int b) {
  return a + b;
} // int leggjaSaman(int, int); virkar

double leggjaSaman(double a, double b){
  return a + b;
} // double leggjaSaman(double, double); virkar

float leggjaSaman(float a, float b) {
  return a + b; 
} // leggjaSaman(float, float); virkar

void fallSemSkilarEngu() {
  cout << "skillar engu" << endl;
}

void vixla(int& a, int& b) { // int& reference MUNA
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  /*
    unsigned short mini_tala = -1; // -1 unsigned gerir stæsrstu tölu
    int heiltala = 42;
    unsigned long stor_tala = 100000;
    float kommutala = 3.14f;
    double onnur_kommutala = 1.23;
    char stafur = 0b01000001;
    bool satt = true; // öll önnur heiltölugildi en 0
    bool osatt = false; // 0

    cout << mini_tala << "\n" << stor_tala << endl;

    
    cout << sizeof(char) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;

    cout << mini_tala << endl;
    cout << int(stafur) << endl;
    cout << (int)stafur << endl;
    cout << stafur << endl;

    cout << "ladadadada " << mini_tala << " feedle de dum " << stafur << endl;

    cout << heiltala << endl;

    int inntak, annar_inntak;
    cout << "sláðu inn tvær tölur: ";
    cin >> inntak >> annar_inntak;
//    cout << "sláðu inn aðra tölu: ";
//    cin >> annar_inntak;
    cout << "þú slóst inn " << inntak 
    << " og slóst inn " << annar_inntak << endl;
    
  
  
  
  int inntak2 = 23;
  int h = 0x23;
  int b = 0b1001;
  int o = 0123;
  cout << "venjuleg tala: " << inntak2 << endl;
  cout << "h tala: " << oct << h << endl;
  cout << "b tala: " << bitset<23>(b) << endl;
  cout << "o tala: " << o << endl;
  

  int k = 10;
  int j = 5;

  if(k < 10 || j == 5) { // not = !, and = &&, or = ||
    cout << "K er minna en 10\n";
  } else if(k > 10 && j!=6) {
    cout << "K er stærra en 10\n";
  } else {
    cout << "K er sama sem 10\n";
  }

  if(j == 5) cout << "J er 5\n";

  (j==5) ? cout << "J er fimm\n" : cout << "J er ekki 5\n";


  int val;
  cout << "veldu aðgerð: ";
  cin >> val;
  switch (val) {
    case 1:
      cout << "þú valdir ein\n";
      cout << "önnur lína\n";
      break;
    case 2:
      cout << "þú valdir 2\n";
      break;
    case 7: //if
      cout << "þú valdir 7\n";
      break;
    default: //else
      cout << "þú valdir einhvað annað\n";
      break;
  }
  

  // while
  int k = 10;
  while(k > 0) {
    cout << "k er " << k << endl;
    k--;
  }

  //do while
  int j = 10;
  do {
    cout << "j er " << j << endl;
    j--;
  } while(j>0);

  //for
  for(int i = 0; i < 10; i++) {
    cout << "i er " << i << endl;
  }
  
  string strengur = "ssss";
  
  
  cout << leggjaSaman(3, 2) << " " 
  << leggjaSaman(3.14, 2.0) << " "
  << leggjaSaman(3.14f, 2.14f) << endl;
  
  int k = 10; // k er 6f8bc8
  int j = 20; // j er 6f8bc4
  cout << "k: " << k << " j: " << j << endl;
  
  int temp = k;
  k = j;
  j = temp;
  
  vixla(k, j);
  cout << "k: " << k << " j: " << j << endl;
  
*/
  int iFylki[] = {1,2,3,4,5};
  cout << iFylki << endl; 
  cout << &iFylki[0] << endl;
  int* f_ptr = iFylki;
  cout << f_ptr << endl;
  cout << *f_ptr << endl;
  *f_ptr = -7;
  f_ptr++;
  cout << f_ptr << endl;
  cout << *f_ptr << endl;
  f_ptr +=2;
  cout << f_ptr << endl;
  cout << *f_ptr << endl;
  f_ptr -=3;
  cout << f_ptr << endl;
  cout << *f_ptr << endl;


  
    float fFylki[2] = {2.2, 3.9};
  int tvivitt[2][2][2] = {
                      {{1, 2},{3, 4}}, 
                      {{5, 6},{7, 8}}
                      };
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      for(int k = 0; k < 2; k++){
        cout << tvivitt[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
  // pointer er breyta sem geymir númer á minnishólfi en ekki gildi
  int iFylki2[4];
  iFylki2[2] = 23;
  int staerd = sizeof(iFylki)/sizeof(iFylki[0]);
  for(int i = 0; i < staerd; i++) {
    cout << iFylki[i] << " ";
  }
/*
   int* ptr = new int(42);
  int *ptrA = ptr;
  cout << ptr << endl;
  cout << *ptr << endl;
  delete ptr;
  cout << ptr << endl;
  cout << *ptr << endl;
  cout << ptrA << endl;
  cout << *ptrA << endl;

   int* ptr = new int[5];
 int* backup =  ptr;
 for(int i = 0; i < 5; i++) {
   *ptr = i;
   cout << *ptr << " ";
 }
 cout << endl;
 delete [] ptr;

 int i = 10;
 i++;
 cout << i << endl;
 ++i;
 cout << i << endl;
 cout << "---------------------------";
 i = 10;
 cout << i++ << endl; // prenta svo hækka
 cout << i << endl;
 cout << ++i << endl; // hækka svo prenta
*/

  return 0;
}