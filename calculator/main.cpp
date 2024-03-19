#include <iostream>
#include "calculator.h"
using namespace std;

// PROBLEMA: Criar uma lib matemática para calcular as operações básicas (adição, subtração, divisão, multiplicação) com base no operador inserido pelo usuário.

double operationResult(double num1, double num2, char op);

int main() {
  double num1, num2;
  char op;
  cout << "Digite um numero: " << endl;
  cin >> num1;
  cout << "Digite o operador(+-*/): " << endl;
  cin >> op;
  cout << "Digite outro numero: " << endl;
  cin >> num2;
  double result = operationResult(num1, num2, op);

  cout << "O resultado e: " << result << endl;
  return 0;
}

double operationResult(double num1, double num2, char op) {
  switch(op) {
    case '+':
      return sum(num1, num2); 
    case '-':
      return subtraction(num1, num2);
    case '*':
      return multiplication(num1, num2);
    case '/':
      return division(num1, num2);
    default:
      return 0;
  }
}