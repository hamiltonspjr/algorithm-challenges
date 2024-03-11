#include <iostream>
using namespace std;

int main() {
  int age;
  cout << "Digite a sua idade: " << endl;
  cin >> age;
  if(age < 16) {
    cout << "Voce nao pode votar" << endl;
  } else if(age == 16 || age == 17 || age >= 65) {
    cout << "Voto facultativo" << endl;
  } else {
    cout << "Você pode votar, seu voto é obrigatorio!" << endl;
  }

  return 0;
}