#include <iostream>
using namespace std;

/*
  Esse programa recebe um número e responde o mês equivalente com
  a lógica do switch.
*/

int main(){
  int mes = 0;

  // Entrada
  cout << "Digite o número de um mês: ";
  cin >> mes;

  // É responsável por testar as possibilidades (como vários ifs emparelhados).
  switch(mes)
  {
    case 1:
      cout << "É Janeiro" << endl;
      break; // É necessário o break pois ao contrário o switch continuaria.

    case 2:
      cout << "É Fevereiro" << endl;
      break;

    case 3:
      cout << "É Março" << endl;
      break;

    default:
      cout << "Não estou afim de digitar o resto, então deve ser algum dos outros." << endl;
  }

  cout << "É só isso pessoal!" << endl; // Mensagem cômica.

  return 0;
}
