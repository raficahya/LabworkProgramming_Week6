#include <iostream>

using namespace std;

struct studentData{
    string zodiacName;
    int studentID;
    float midtermScore;
    float finalExamScore;
};

int main()
{
    int n;
    cout << "Insert the value of N!";
    cin >> n;
    studentData student[n];

    cout << endl;

    for (int i=1; i<=n; i++){
        cout << "Insert the Student ID!";
        cin >> student[i].studentID;

        cout << "Insert the MidTerm Score!";
        cin >> student[i].midtermScore;

        cout << "Insert the Final Exam Score!";
        cin >> student[i].finalExamScore;

        cout << endl;
    }

    cout << endl;

    for (int i=1; i<=n; i++){
        cout << "Student ID : " << student[i].studentID << endl;
        cout << "Average Score : " << (student[i].midtermScore + student[i].finalExamScore) / 2 << endl;
    }

    return 0;
}
