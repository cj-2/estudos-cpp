#include <iostream>
#include <iomanip> // Biblioteca de formatação de impressão.

using namespace std;

int main(){

  // Objeto para saida: cout
  // Objeto para entrada: cin

  cout <<  "Estudando entradas e saidas de dados." << endl;
  cout << hex << 10 + 50 << endl; // Manipulador "hex" converte em hexadecimais.

  cout << setw(80) << "Olá muitos caractéres depois!" << endl;
  // Define a quantidade de caractéres que será impresso.

  return 0;
}
