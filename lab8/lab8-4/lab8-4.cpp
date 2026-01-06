#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string nickname;
    string lineId;
    string phone;
};

void swapStudent(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Student " << (i + 1) << ":\n";
        cout << "ID: " << students[i].id << '\n';
        cout << "Nickname: " << students[i].nickname << '\n';
        cout << "Line ID: " << students[i].lineId << '\n';
        cout << "Phone: " << students[i].phone << '\n';
        cout << endl;
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "ID: ";
        if (!(cin >> students[i].id)) return 0;

        cout << "Enter Nickname: ";
        cin >> students[i].nickname;

        cout << "Enter Line ID: ";
        cin >> students[i].lineId;

        cout << "Phone: ";
        cin >> students[i].phone;

        cout << endl;
    }

    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
