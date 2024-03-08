#include <iostream>
using namespace std;

// Problema: Faça um programa que leia as notas de um aluno em 4 períodos e calcule a média. Se a média for maior ou igual a 7, o aluno passou de ano. Caso contrário, o aluno reprovou de ano.

int main() {
    double firstSemesterGrade, secondSemesterGrade, thirdSemesterGrade, fourthSemesterGrade, average;
    cout << "Digite a nota do primeiro período:" << endl;
    cin >> firstSemesterGrade;
    cout << "Digite a nota do segundo período:" << endl;
    cin >> secondSemesterGrade;
    cout << "Digite a nota do terceiro período:" << endl;
    cin >> thirdSemesterGrade;
    cout << "Digite a nota do quarto período:" << endl;
    cin >> fourthSemesterGrade;
    average = (firstSemesterGrade + secondSemesterGrade + thirdSemesterGrade + fourthSemesterGrade) / 4;

    cout << "Média: " << average << endl;
    if(average >= 7) {
      cout << "Passou de ano!" << endl;
    } else {
      cout << "Reprovou de ano!" << endl;
    }
}