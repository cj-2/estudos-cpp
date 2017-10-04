#include <iostream>
using namespace std;

int main(){

  int num1, num2;
  num1 = 3;
  num2 = 9;

  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;

  cout << endl;

  cout << "Soma entre os inteiros num1 e num2: " << num1 + num2 << endl;
  cout << "Subtração entre os inteiros num1 e num2: " << num1 - num2 << endl;
  cout << "Multiplicação entre os inteiros num1 e num2: " << num1 * num2 << endl;

  cout << endl;

  cout << "Divisão entre os inteiros num1 e num2: " << num1 / num2 << endl;
  cout << "Divisão entre os inteiros num1 e (num2 + 1.0): " << num1 / (num2 + 1.0) << endl;

  return 0;
}
