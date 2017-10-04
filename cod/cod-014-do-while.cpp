#include <iostream>
#include <string>
using namespace std;

// Exemplo da utilização do laço do while
// E também .compare() para comparar strings.

int main(){

  string num;

  do {
    cout << "Digite o número 8: ";
    cin >> num;

  } while( num.compare("8") );

  // num.compare('string') -> Pergunta: É diferente? E responde se é ou não diferente.

  cout << "Viu como era fácil?" << endl;

  return 0;
}
