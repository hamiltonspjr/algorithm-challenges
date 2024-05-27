#include <iostream>
using namespace std;

struct Student
{
  string name;
  int age;
  double scores[4];
  double average;
  void generate() {
    cout << "Digite o nome do aluno: " << endl;
    cin >> name;
    cout << "Digite a idade do aluno: " << endl;
    cin >> age;
    cout << "Digite a nota do primeiro periodo: " << endl;
    cin >> scores[0];
    cout << "Digite a nota do segundo periodo: " << endl;
    cin >> scores[1];
    cout << "Digite a nota do terceiro periodo: " << endl;
    cin >> scores[2];
    cout << "Digite a nota do quarto periodo: " << endl;
    cin >> scores[3];

    average = (scores[0] + scores[1] + scores[2] + scores[3]) / 4;
  }
};

struct Report {
    int approvedStudents;
    int studentsInRecovery;
    void print(Student students[], int currentStudentIndex) {
      approvedStudents = 0;
    studentsInRecovery = 0;
  for(int i = 0; i < currentStudentIndex; i++) {
    if(students[i].average >= 7) {
      approvedStudents++;
    } else {
      studentsInRecovery++;
    }
  }

  cout << endl;
  cout << "Relatorio:" << endl;
  cout << endl;
  cout << approvedStudents << " aluno(s) passaram de ano!" << endl;
  cout << studentsInRecovery << " aluno(s) foi/foram para recuperacao!" << endl;
    }
};


int main()
{
  char toContinue;
  Student studentesList[100];
  int currentStudentIndex = 0;
  
  do {
    Student student;
    student.generate();
   
    studentesList[currentStudentIndex] = student;
    currentStudentIndex++;  

    cout << "Deseja cadastrar mais um aluno? (s/n)" << endl;
  }while(cin>>toContinue && toContinue == 's');

  for(int i = 0; i < currentStudentIndex; i ++) {
    cout << studentesList[i].name << ", " << studentesList[i].age << " anos, media " << studentesList[i].average << endl;
  }
  Report report;
  report.print(studentesList, currentStudentIndex);
  return 0;
}

