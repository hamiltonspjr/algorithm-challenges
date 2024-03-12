#include <iostream>
using namespace std;

// Problema: Somar todos valores digitados pelo usuário até que ele digite 0

int main() {
  int number, sum = 0;
  do {
    cout << "Digite um numero: " << endl;
    cin >> number;

    sum += number;
  }while(number != 0);

  cout << "Resultado da soma foi: " << sum << endl;

  return 0;
}