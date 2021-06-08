#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 2;
	cout << "before:  " << a << "   " << b << endl;
	swap(a, b);
	cout << "after:  " << a << "   " << b << endl;
	return 0;
}
void swap(int& c, int& d)
{
	int temp;
	temp = c;
	c = d;
	d = temp;
}