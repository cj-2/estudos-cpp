#include <iostream>
using namespace std;

// Criando uma classe.
class Carro{

  //Separação entre public e private.
  public:
    double veloMax;
    string tipo;
    void ini(int tp); // Prototipa o método ini.

  private:

};

// Os Métodos são criados fora da classe e iniciados como tipo void.
// Como vê é necessario indicar antes a classe Carro::metodo()
void Carro::ini(int tp){

  // 1 - Carro normal
  // 2 - Carro de corrida

  if(tp == 1){
    this->veloMax = 120;
    this->tipo = "Normal";
  }
  else if (tp == 2){
    this->veloMax = 400;
    this->tipo = "Corrida";
  }

}

int main(){

  // Especifica o tipo (Casse Carro), nome (com regra, se declara como ponteiro),
  // e valor que é a instancia do objeto Carro.
  Carro *uno = new Carro();

  uno->ini(2);

  // Para imprimir uma propriedade é como no PHP.
  cout << "Tipo do Carro: " << uno->tipo << endl;
  cout << "Velocidade Máxima: " << uno->veloMax << endl;

  return 0;
}
