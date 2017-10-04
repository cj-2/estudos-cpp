#include <iostream>
using namespace std;

int main(){

  int num1, num2;

  cout << "Bem vindo(a) a Calculadora Ralé!" << endl;

  cout << "Por favor insira um número: ";
  cin >> num1; // Recebe o número digitado e implementa em num1.

  cout << "Agora outro número moço(a): ";
  cin >> num2;

  cout << "A soma dos números é: " << num1 + num2 << endl;
  cout << "A subtração dos números é: " << num1 - num2 << endl;
  cout << "A multiplicação dos números é: " << num1 * num2 << endl;
  cout << "A divisão dos números é: " << num1 / (num2 + 0.0) << endl;

  return 0;
}
