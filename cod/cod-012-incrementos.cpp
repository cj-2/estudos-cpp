#include <iostream>
using namespace std;

// Caso imprima num++ primeiro será impresso o num e depois acrecentado + 1
// Caso imprima ++num o contrário acontece.

int main(){

  int num1 = 2;
  int num2 = 2;

  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;

  cout << endl;

  cout << "Ao se chamar num1++ no terminal, primeiro o número será impresso e depois somado: " << num1++ << endl;
  cout << "Segunda impressão: " << num1 << endl;

  cout << endl;

  cout << "Entretando se chamarmos ++num2 no terminal, primeiro será somado e depois impresso: " << ++num2 << endl;
  cout << "Segunda impressão: " << num2 << endl;
  return 0;
}
