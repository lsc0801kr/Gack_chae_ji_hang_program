//�����ε� == ������
//������ �����ε�: C++ �����ڵ鿡 �������� �ǹ� �ο�

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

Complex Complex::Sum(Complex lvalue/*x�κ�*/, Complex rvalue/*y�κ�*/)
//x�� y�� ��� �޴´�.
{
	Complex res;
	res.real = lvalue.real + rvalue.real;   //res.real=x�� ù��° �� + y�� ù��° ��
	res.image = lvalue.image + rvalue.image;//res.image=x�� �ι�° �� + y�� �ι�° ��
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