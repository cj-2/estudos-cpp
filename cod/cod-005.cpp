#include <iostream>
using namespace std;

int main(){

  int a = 0;        // 4 bytes de memória.
  short int b = 0;  // 2 bytes de memória.
  long int c = 0;   // 8 bytes de memória.

  cout << "A variável a (normal) tem o tamanho de: " << sizeof(a) << " bytes" << endl;
  cout << "A variável b (short) tem o tamanho de: " << sizeof(b) << " bytes" << endl;
  cout << "A variável c (long) tem o tamanho de: " << sizeof(c) << " bytes" << endl;

  cout << endl;

  signed int a2 = -10;
  unsigned int b2 = -11; // O valor não será imprimido como -10 pois ocorre um erro.

  cout << "A variável a2 equivale a " << a2 << endl;
  cout << "A variável b2 equivale a " << b2 << " (sujeira pois a variavel foi definida como unsigned e recebeu um número negativo.)" << endl;

  char a3 = 120; // Entre -127 a 127
  unsigned char b3 = 0; // Entre 0 a 255

  cout << a3 << endl;
  cout << b3 << endl;

  return 0;
}
