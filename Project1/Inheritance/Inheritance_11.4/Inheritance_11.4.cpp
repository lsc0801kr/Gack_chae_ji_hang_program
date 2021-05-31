#include <iostream>
using namespace std;
class Cal {
protected:
	int a;
	int b;
	int c;
public:
	void Prn();
	Cal(int new_A, int new_B);
	Cal();
};
Cal::Cal()
{
	a = 0;
	b = 0;
}
Cal::Cal(int new_A, int new_B)
{
	a = new_A;
	b = new_B;
}
void Cal::Prn()
{
	cout << a << "\t" << b << "\t" << c << endl;
}
class Add :public Cal{
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void Prn();//오버라이딩
};
Add::Add() :Cal()
{
}
Add::Add(int new_A, int new_B) : Cal(new_A, new_B)
{
	c = 0;
}
void Add::Sum()
{
	c = a + b;
}
void Add::Prn()//오버라이딩
{
	cout << a << " + " << b << " = " << c << endl;
}
class Mul :public Cal {
protected:
	int c;
public:
	Mul();
	Mul(int new_A, int new_B);
	void Mult();
	void Prn();//오버라이딩
};
Mul::Mul()
{

}
Mul::Mul(int new_A, int new_B) :Cal(new_A, new_B)
{
	c = 0;
}
void Mul::Mult()
{
	c = a * b;
}
void Mul::Prn()
{
	Cal::Prn();
	cout << a << " * " << b << " = " << c << endl;
}
int main()
{
	Cal x(3, 5);
	x.Prn();
	Add y(3, 5);
	y.Prn();
	Add z;
	z.Prn();
	return 0;
}