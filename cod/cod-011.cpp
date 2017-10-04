#include <iostream>
using namespace std;

int main(){

  cout << "Vamos calcular a média de suas provas..." << endl;

  int numProvas = 0;
  cout << "Digite quantas provas fez: ";
  cin >> numProvas;

  double nota = 0.0;
  double somaNotas = 0.0;

  for (size_t i = 1; i <= numProvas; i++) {
    cout << "Digite a " << i << "ª nota: ";
    cin >> nota;
    somaNotas += nota;
  }

  cout << "Sua média foi: " << (somaNotas / numProvas) << endl;

  if ((somaNotas / numProvas) < 7)
    cout << "Status: Reprovado." << endl;
  else
    cout << "Status: Aprovado." << endl;

  return 0;
}
