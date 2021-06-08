//#include <iostream>
//using namespace std;
//class Complex {
//private:
//	int real;
//	int image;
//public:
//	Complex(int r = 0, int i = 0);
//	void ShowComplex();
//	Complex operator+(Complex rvalue);
//};
//
//void Complex::ShowComplex()
//{
//	if (image > 0)
//		cout << "(" << real << " + " << image << "i)" << endl;
//	else if (image < 0)
//		cout << "(" << real << image << "i)" << endl;
//	cout << real << endl;
//}
//Complex::Complex(int r, int i)
//{
//	real = r;
//	image = i;
//}
//
//Complex Complex::operator+(Complex rvalue)
//{
//	Complex res;
//	res.real = real + rvalue.real;
//	res.image = image + rvalue.image;
//	return res;
//}
//
//int main()
//{
//	Complex x(3, 4), y(3, 4);
//	Complex z;
//	z = x.operator+(y); //z=x+y;
//	x.ShowComplex();
//	y.ShowComplex();
//	z.ShowComplex();
//
//	return 0;
//}

#include <iostream>
using namespace std;
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	Complex operator+(Complex rvalue);
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

Complex Complex::operator+(Complex rvalue)
{
	Complex res;
	res.real = real + rvalue.real;
	res.image = image + rvalue.image;
	return res;
}

int main()
{
	Complex x(3, 4), y(3, 4), z(1,2);
	Complex a;
	a = x + y + z; //a=x.operator+(y+z);
	               //a=x.operator+(y.operator+(z))
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();
	a.ShowComplex();

	return 0;
}