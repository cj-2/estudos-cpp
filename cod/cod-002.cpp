#include <iostream>
using namespace std;

int main(){

  int varInt = 100;
  char c = 'r';
  double pFlutuante = 5.99;

  cout << "O valor de vaInt é: " << varInt << " | ";
  cout << "Tamanho: " << sizeof(varInt) << " bytes" << endl;

  cout << "O valor de c é: " << c << " | ";
  cout << "Tamanho: " << sizeof(c) << " bytes" << endl;

  cout << "O valor de pFlutuante é: " << pFlutuante << " | ";
  cout << "Tamanho: " << sizeof(pFlutuante) << " bytes" << endl;

  return 0;
}
