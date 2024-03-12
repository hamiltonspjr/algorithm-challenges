#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Digite o número que deseja saber o fatorial: " << endl;
  cin >> number;

  int factorial = 1;
  while(number > 0) {
    factorial = factorial * number;
    number--;
  }

  cout << "O fatorial do numero digitado e:" << factorial << endl;

  return 0;
}