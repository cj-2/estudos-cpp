#include <iostream>
using namespace std;

int main(){

  int  a = 5 / 2;
  int num1, num2;

  cout << "Descubra a divisão e módulo entre dois números." << endl;

  cout << "Digite um número: ";
  cin >> num1;

  cout << "Digite outro número: ";
  cin >> num2;

  int divisao = num1 / num2;
  int modulo = num1 % num2; // % = Módulo ou resto.

  cout << "A divisão de num1 por num2 é " << divisao << endl;
  cout << "O módulo de num1 por num2 é " << modulo << endl;

  return 0;
}
