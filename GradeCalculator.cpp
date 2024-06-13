#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const int ASSIGN_WEIGHT = 15,
              TEST_WEIGHT = 50,
              EXAM_WEIGHT = 30,
              PARTIC_WEIGHT = 5;
    float assignPercent,
          testPercent,
          examPercent,
          particPercent,
          weightedSum,
          finalGrade;

    cout << "Grade Calculator - Computer Programming I" << endl;

    cout << "\nThe weight of each component on the final grade:\n"
         << "\tProgramming Assignments: " << ASSIGN_WEIGHT << "%\n"
         << "\tChapter Tests: " << TEST_WEIGHT << "%\n"
         << "\tFinal Exam: " << EXAM_WEIGHT << "%\n"
         << "\tClass Participation: " << PARTIC_WEIGHT << "%" << endl;

    cout << "\nEnter the graded percentage (out of 100%) for Programming Assignments: ";
    cin >> assignPercent;

    cout << "Enter the graded percentage (out of 100%) for Chapter Tests: ";
    cin >> testPercent;

    cout << "Enter the graded percentage (out of 100%) for Final Exam: ";
    cin >> examPercent;

    cout << "Enter the graded percentage (out of 100%) for Class Participation: ";
    cin >> particPercent;

    weightedSum = (assignPercent * ASSIGN_WEIGHT +
                   testPercent * TEST_WEIGHT +
                   examPercent * EXAM_WEIGHT +
                   particPercent * PARTIC_WEIGHT) / 100.0;

    cout << fixed << setprecision(2);

    cout << "\nWeighted Percentages:\n"
         << "\t" << assignPercent * ASSIGN_WEIGHT / 100 << "% in Programming Assignments\n"
         << "\t" << testPercent * TEST_WEIGHT / 100 << "% in Chapter Tests\n"
         << "\t" << examPercent * EXAM_WEIGHT / 100 << "% in Final Exam\n"
         << "\t" << particPercent * PARTIC_WEIGHT / 100 << "% in Class Participation" << endl;

    cout << "\nFinal Grade: " << weightedSum << "%" << endl;

    if (weightedSum >= 97)
        cout << "\nYour Grade is A+";
    else if (weightedSum >= 94)
        cout << "\nYour Grade is A";
    else if (weightedSum >= 90)
        cout << "\nYour Grade is A-";
    else if (weightedSum >= 87)
        cout << "\nYour Grade is B+";
    else if (weightedSum >= 84)
        cout << "\nYour Grade is B";
    else if (weightedSum >= 80)
        cout << "\nYour Grade is B-";
    else if (weightedSum >= 77)
        cout << "\nYour Grade is C+";
    else if (weightedSum >= 74)
        cout << "\nYour Grade is C";
    else if (weightedSum >= 70)
        cout << "\nYour Grade is C-";
    else if (weightedSum >= 60)
        cout << "\nYour Grade is D";
    else
        cout << "\nYour Grade is F";

    return 0;
}
