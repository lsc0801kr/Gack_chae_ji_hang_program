//오버로딩 == 재정의
//연산자 오버로딩: C++ 연산자들에 다중적인 의미 부여

#include <iostream>
using namespace std;
class Complex {
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex();
	Complex Sum(Complex lvalue, Complex rvalue);
};

void Complex::ShowComplex()
{
	if (image > 0)
		cout << "(" << real << " + " << image << "i)" << endl;
	else if (image < 0)
		cout << "(" << real << image << "i)" << endl;
	else
	cout << real << endl;
}
Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

Complex Complex::Sum(Complex lvalue/*x부분*/, Complex rvalue/*y부분*/)
//x와 y를 모두 받는다.
{
	Complex res;
	res.real = lvalue.real + rvalue.real;   //res.real=x의 첫번째 값 + y의 첫번째 값
	res.image = lvalue.image + rvalue.image;//res.image=x의 두번째 값 + y의 두번째 값
	return res;
}

int main()
{
	Complex x(3, 4), y(1, 2);
	Complex z;
	z = x.Sum(x, y);
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	return 0;
}