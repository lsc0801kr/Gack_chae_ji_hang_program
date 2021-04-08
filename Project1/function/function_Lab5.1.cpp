#include <iostream>

#include <cstdlib>

#include <cmath>
int main()
{
	using namespace std;
	int random;
	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			random = rand() % 6 + 1;
			cout << random << " ";
		}
		cout << endl;
	}
	return 0;
}