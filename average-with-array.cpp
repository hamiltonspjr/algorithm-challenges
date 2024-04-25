#include <iostream>
using namespace std;

int main() {
  string studentName;
  double scores[4];

  cout << "Digite o seu nome: " << endl;
  cin>>studentName;
  
  cout << "Digite a nota do primeiro periodo: " << endl;
  cin>>scores[0];
  
  cout << "Digite a nota do segundo periodo: " << endl;
  cin>>scores[1];
  
  cout << "Digite a nota do terceiro periodo: " << endl;
  cin>>scores[2];
  
  cout << "Digite a nota do quarto periodo: " << endl;
  cin>>scores[3];
  
  double average = 0;
  int sizeOfScores = sizeof(scores) / sizeof(double);
  for(int i = 0; i < sizeOfScores; i++) {
      average += scores[i];
  }
  
  average = average / sizeOfScores;
  
  cout <<"A media de " << studentName << " foi " << average << endl;
  if(average > 7) {
      cout << "Passou de ano!" << endl;
  } else {
      cout << "Vai para a recuperação" << endl;
  }
  return 0;
}