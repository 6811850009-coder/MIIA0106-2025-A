#include <iostream>

void swapByValue(int a, int b) {
    int t = a; a = b; b = t;
}

void swapByReference(int &a, int &b) {
    int t = a; a = b; b = t;
}

int main() {
    int a = 10, b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << '\n';

    swapByValue(a, b);
    std::cout << "After swap (Call by Value): a = " << a << ", b = " << b << '\n';

    swapByReference(a, b);
    std::cout << "After swap (Call by Reference): a = " << a << ", b = " << b << '\n';

    return 0;
}