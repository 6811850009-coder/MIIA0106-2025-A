#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double total, double average, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Total Score : " << fixed << setprecision(2) << total << "\n";
    cout << "Average     : " << fixed << setprecision(2) << average << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int N = 3; // students
    const int M = 4; // subjects

    string name[N], id[N];
    double score[N][M];
    double total[N];
    double average[N];
    char grade[N];

    for (int i = 0; i < N; ++i)
    {
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, name[i]);
        cout << "Enter ID of student " << (i + 1) << ": ";
        getline(cin, id[i]);
        total[i] = 0.0;
        for (int j = 0; j < M; ++j)
        {
            cout << "Enter score for subject " << (j + 1) << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }
        cin.ignore(); // clear newline character from input buffer
        average[i] = total[i] / M;
        calculateGrade(average[i], grade[i]);
    }

    for (int i = 0; i < N; ++i)
    {
        cout << "\n--- Student " << (i + 1) << " Information ---\n";
        displayStudentInfo(name[i], id[i], total[i], average[i], grade[i]);
    }

    return 0;
}
