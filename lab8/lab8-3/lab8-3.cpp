#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string nickname;
    string lineId;
    string phone;
};

void printStudent(Student s) {
    cout << "ID: " << s.id << '\n';
    cout << "Nickname: " << s.nickname << '\n';
    cout << "Line ID: " << s.lineId << '\n';
    cout << "Phone: " << s.phone << '\n';
}

int main() {
    Student s1;

    cout << "Input Student 1\n";
    cout << "ID: ";
    if (!(cin >> s1.id)) return 0;

    cout << "Enter Nickname: ";
    cin >> s1.nickname;

    cout << "Enter Line ID: ";
    cin >> s1.lineId;

    cout << "Phone: ";
    cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
    printStudent(s1);

    return 0;
}