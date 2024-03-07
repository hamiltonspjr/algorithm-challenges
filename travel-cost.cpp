#include <iostream>
using namespace std;

// Problema: Faça um programa que leia a distância de uma viagem, a quantidade de KM que o carro faz por litro e o valor da gasolina. O programa deve imprimir o custo da viagem.

int main() {
  double distance, kmPerLiter, priceFuel, travelCost;
  cout << "Qual a distância da sua viagem?" << endl;
  cin >> distance;
  cout << "Quantos KM seu carro faz por litro?" << endl;
  cin >> kmPerLiter;
  cout << "Qual o valor da gasolina?" << endl;
  cin >> priceFuel;
  travelCost = distance / kmPerLiter * priceFuel;
  cout << "O custo da sua viagem será de R$ " << travelCost << endl;

  return 0;
}