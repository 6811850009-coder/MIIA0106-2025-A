#include <iostream>
#include <cmath>

using namespace std;

int maxOfThree(int a, int b, int c) {
   if (a >= b && a >= c) {
	   return a;
   } else if (b >= a && b >= c) {
	   return b;
   } else {
	   return c;
   }
}

int main()
{
    int a, b, c;

	cout << "Enter three integers a: ";
    cin >> a;
	cout << "Enter three integers b: ";
	cin >> b;
	cout << "Enter three integers c: ";
	cin >> c;
	int maxVal = maxOfThree(a, b, c);
	std::cout << " maximum : " << maxVal << std::endl;
	return 0;

}