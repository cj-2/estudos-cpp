#include <iostream>
using namespace std;

// Uso do for em C++ para a criação de uma tabuada simples.

int main(){

  int tabuada = 0;

  cout << "Digite a tabuada que deseja saber: ";
  cin >> tabuada;

  for (size_t i = 1; i <= 10; i++) {
    cout << i << " x " << tabuada << " = " << i * tabuada << endl;
  }

  return 0;
}
