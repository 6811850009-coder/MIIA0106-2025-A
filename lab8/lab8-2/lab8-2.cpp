#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "Input Student " << (i + 1) << '\n';
        cout << "ID: ";
        if (!(cin >> students[i].id)) return 0;

        cout << "Enter Nickname: ";
        cin >> students[i].nickname;

        cout << "Enter Line ID: ";
        cin >> students[i].lineId;

        cout << "Phone: ";
        cin >> students[i].phone;

        cout << '\n';
    }
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Output Student " << (i + 1) << '\n';
        cout << "ID: " << students[i].id << '\n';
        cout << "Nickname: " << students[i].nickname << '\n';
        cout << "Line ID: " << students[i].lineId << '\n';
        cout << "Phone: " << students[i].phone << '\n';
        cout << '\n';
    }

    return 0;
}
