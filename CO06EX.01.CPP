//CO06EX.01.CPP

#include <iostream>
using namespace std;

int main (void)
{
  int IDADE = 25; // varial normal
  int *PIDADE =0; // variavel especial aponta endereço de outra variavel

  PIDADE = &IDADE; // PIDADE é um ponteiro então &IDADE ponteiro indicanto o endereço do primeiro bit da memoria

  cout << "IDADE = " << IDADE << " | End: = " << &IDADE; // Valor da variavel simples e endereço contento o endereço
  cout << endl;

  cout << "PIDADE = " << *PIDADE; // o valor dessa variavel é o valor do endereço que o ponteiro indicou
  cout << " | End: = " << &PIDADE << endl; // valor de endereço do ponteiro

  cout << endl;
  cout << "Tecle <enter> para encerrar...";
  cin.get();
  return 0;

}
