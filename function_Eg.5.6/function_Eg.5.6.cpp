#include <iostream>
using namespace std;
void swap(int& z, int& y)
{
	int temp;
	temp = z;
	z = y;
	y = temp;
}
void swap(double& z, double& y)
{
	double temp;
	temp = z;
	z = y;
	y = temp;
}
int main()
{
	int a = 1, b = 2;
	swap(a, b);
	cout << a << "," << b << endl;
	double c = 0.1, d = 0.2;
	swap(c, d);
	cout << c << "," << d << endl;
	return 0;
}