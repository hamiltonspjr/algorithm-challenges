#include <iostream>
using namespace std;

// Problema: Faça um programa que leia dois números e imprima a soma deles.

int main() {
  double num1, num2, result;
  cout << "Digite o primeiro número: ";
  cin >> num1;
  cout << "Digite o segundo número: ";
  cin >> num2;
  result = num1 + num2;
  cout << "A soma dos números é: " << result << endl;

  return 0;
}