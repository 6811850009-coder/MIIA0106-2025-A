#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    cout << "score = " << score << endl;
    cout << "*ptr = " << (*ptr) << endl;
    cout << "&score = " << (&score) << endl;
	cout << "value ptr = " << ptr << endl;
	cout << "&ptr = " << &ptr << endl;

    return 0;
}
