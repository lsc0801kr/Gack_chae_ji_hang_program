#include <iostream>
using namespace std;
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	Complex Sum(Complex rvalue);
};

void Complex::ShowComplex()
{
	if (image > 0)
		cout << "(" << real << " + " << image << "i)" << endl;
	else if (image < 0)
		cout << "(" << real << image << "i)" << endl;
	cout << real << endl;
}
Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

Complex Complex::Sum(Complex rvalue)
{
	Complex res;
	res.real = this->real + rvalue.real;
	res.image = this->image + rvalue.image;
	return res;
}

int main()
{
	Complex x(3, 4), y(3, 4);
	Complex z;
	z = x.Sum(y); //z=x+y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	return 0;
}