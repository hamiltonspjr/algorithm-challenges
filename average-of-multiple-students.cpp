#include <iostream>
using namespace std;

struct Studentes
{
  string name;
  int age;
  double scores[4];
  double average;
};


int main() {
  char toContinue;
  Studentes studentesList[100];
  int currentStudentIndex = 0;
  
  do {
    Studentes student;
    cout << "Digite o nome do aluno: " << endl;
    cin >> student.name;
    cout << "Digite a idade do aluno: " << endl;
    cin >> student.age;
    cout << "Digite a nota do primeiro periodo: " << endl;
    cin >> student.scores[0];
    cout << "Digite a nota do segundo periodo: " << endl;
    cin >> student.scores[1];
    cout << "Digite a nota do terceiro periodo: " << endl;
    cin >> student.scores[2];
    cout << "Digite a nota do quarto periodo: " << endl;
    cin >> student.scores[3];

    student.average = (student.scores[0] + student.scores[1] + student.scores[2] + student.scores[3]) / 4;

    studentesList[currentStudentIndex] = student;
    currentStudentIndex++;  

    cout << "Deseja cadastrar mais um aluno? (s/n)" << endl;
  }while(cin>>toContinue && toContinue == 's');

  for(int i = 0; i < currentStudentIndex; i ++) {
    cout << "O estudante " << studentesList[i].name << ", " << studentesList[i].age << " anos, media " << studentesList[i].average << endl;
  }
  return 0;
}