#include <iostream>
using namespace std;

struct Student
{
  string name;
  int age;
  double scores[4];
  double average;
};

struct Report {
    int approvedStudents;
    int studentsInRecovery;
};

Student generateStudent();
void generateReport(Student students[], int currentStudentIndex);

int main()
{
  char toContinue;
  Student studentesList[100];
  int currentStudentIndex = 0;
  
  do {
    Student student = generateStudent();
   
    studentesList[currentStudentIndex] = student;
    currentStudentIndex++;  

    cout << "Deseja cadastrar mais um aluno? (s/n)" << endl;
  }while(cin>>toContinue && toContinue == 's');

  for(int i = 0; i < currentStudentIndex; i ++) {
    cout << studentesList[i].name << ", " << studentesList[i].age << " anos, media " << studentesList[i].average << endl;
  }
  generateReport(studentesList, currentStudentIndex);
  return 0;
}

Student generateStudent() {

   Student student;
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

    return student;
}

void generateReport(Student students[], int currentStudentIndex) {
  Report reportStudents = {0,0};
  for(int i = 0; i < currentStudentIndex; i++) {
    if(students[i].average >= 7) {
      reportStudents.approvedStudents++;
    } else {
      reportStudents.studentsInRecovery++;
    }
  }

  cout << endl;
  cout << "Relatorio:" << endl;
  cout << endl;
  cout << reportStudents.approvedStudents << " aluno(s) passaram de ano!" << endl;
  cout << reportStudents.studentsInRecovery << " aluno(s) foi/foram para recuperacao!" << endl;
  
}