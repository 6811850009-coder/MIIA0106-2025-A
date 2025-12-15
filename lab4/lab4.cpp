#include <iostream>

using namespace std;

int main()
{
	int i = 1;

	for (i = 1; i <= 10; i++) {
		cout << i << "\n";
	}


	//----------------------------------
	i = 1;
	while (i <= 10) {
		cout << i << "\n";
		i++;
	}
	i = 1;
	do
	{
		cout << i << "\n";
		i++;
	} while (i <= 10);
	return 0;
}

