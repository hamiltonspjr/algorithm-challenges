#include <iostream>
using namespace std;

// Desafio: Receber 3 numeros e calcular a media entre eles

double calcAverage(double num1, double num2, double num3);

int main() {
  double num1, num2, num3, result;
  cout << "Digite o primeiro numero: " << endl;
  cin >> num1;
  cout << "Digite o segundo numero: " << endl;
  cin >> num2;
  cout << "Digite o terceiro numero: " << endl;
  cin >> num3;

  result = calcAverage(num1, num2, num3);

  cout << "A media dos numeros e:" << result << endl;
  return 0;
}

double calcAverage(double num1, double num2, double num3) {
  return (num1 + num2 + num3) / 3;
}