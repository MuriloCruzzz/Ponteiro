//Co06EX.01.CPP

#include <iostream>
using namespace std;

int main (void)
{
  int IDADE = 25;
  int *PIDADE =0;

  PIDADE = &IDADE;

  cout << "O valor idade " << IDADE << " esta armazenado";
  cout << " no endereco de memoria " << PIDADE << endl;

  cout << endl;
  cout << "Tecle <enter> para encerrar...";
  cin.get();
  return;

}
