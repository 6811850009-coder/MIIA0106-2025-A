#include <iostream>
#include <string>

using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

void inputStudent(Student& s) {
    cout << " Enter Student Data " << endl;
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Nickname: ";
    cin >> s.nickname;
    cout << "Enter Line ID: ";
    cin >> s.lineId;

    cout << "\n Enter Student's Contact Info " << endl;
    cout << "Enter Mobile Number: ";
    cin >> s.myContact.mobile;
    cout << "Enter Home Number: ";
    cin >> s.myContact.home;

    cout << "\n Enter Parent Data " << endl;
    cout << "Enter Parent's Name: ";
    cin >> s.myParent.name;
    cout << "Enter Relationship: ";
    cin >> s.myParent.relationship;

    cout << "\n Enter Parent's Contact Info " << endl;
    cout << "Enter Parent's Mobile Number: ";
    cin >> s.myParent.contact.mobile;
    cout << "Enter Parent's Home Number: ";
    cin >> s.myParent.contact.home;
}

void displayStudent(const Student& s) {
    cout << "STUDENT INFORMATION" << endl;

    cout << "1. Student Data:" << endl;
    cout << "   ID: " << s.id << endl;
    cout << "   Nickname: " << s.nickname << endl;
    cout << "   Line ID: " << s.lineId << endl;

    cout << "2. Student Contact:" << endl;
    cout << "   Mobile: " << s.myContact.mobile << endl;
    cout << "   Home: " << s.myContact.home << endl;

    cout << "3. Parent Data:" << endl;
    cout << "   Name: " << s.myParent.name << endl;
    cout << "   Relationship: " << s.myParent.relationship << endl;

    cout << "4. Parent Contact:" << endl;
    cout << "   Mobile: " << s.myParent.contact.mobile << endl;
    cout << "   Home: " << s.myParent.contact.home << endl;

}

int main() {

    Student s1;

    inputStudent(s1);

    displayStudent(s1);

    return 0;
}