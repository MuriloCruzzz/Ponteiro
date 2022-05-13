// # Ponteiro
// C06ËX05.CPP

#include <iostream>
using namespace std;

int main (void)
{
  int A, *PA; // A = variavel normal e *PA ponteiro

  PA = &A;

  cout << "Entre um valor inteiro: ";
  cin >> *PA;
  cin.ignore(80, '\n');

  cout << "\nValor informado = " << A << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
