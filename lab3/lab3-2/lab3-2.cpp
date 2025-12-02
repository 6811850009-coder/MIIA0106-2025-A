// lab3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
	string id;
	string name;
	int score = 0;
	string line;

	cout << "โปรแกรมรับข้อมูลนักศึกษาและตัดเกรด\n";


	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your id: ";
	cin >> id;
	cout << "Enter your score: ";
	cin >> score;

	if (score <= 0||score > 100) {
		cout << "ERROR." << endl;
		return 0;
	}

	if (score > 100) cout << "Error";
	else if (score >= 90) {
		cout << "เกรด A" << endl;
	}
	else if (score >= 80) {
		cout << "เกรด B" << endl;
	}
	else if (score >= 70) {
		cout << "เกรด C" << endl;
	}
	else if (score >= 60) {
		cout << "เกรด D" << endl;
	}
	else {
		cout << "เกรด F" << endl;
	}
	return 0;
}

