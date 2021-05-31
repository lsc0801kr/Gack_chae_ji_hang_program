#include <iostream>
using namespace std;
class Cal {
protected:
	int a;
	int b;
public:
	Cal();
	Cal(int new_A, int new_B);
	void Prn();
};
Cal::Cal()
{
	a = 0; b = 0;
}
Cal::Cal(int new_A, int new_B)
{
	a = new_A;
	b = new_B;
}
void Cal::Prn()
{
	cout << a << "\t" << b << endl;
}
class Add : public Cal {
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
	Cal::Prn();
	cout << a << " + " << b << " = " << c << endl;
}
class Mul :public Cal {
protected:
	int c;
public:
	Mul();
	Mul(int new_A, int new_B);
	void Mult();
	void Prn(); //오버라이딩
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
void Mul::Prn() //오버라이딩
{
	Cal::Prn();
	cout << a << " * " << b << " = " << c << endl;
}
int main()
{
	Cal x(1, 2);
	x.Prn();
	Add y(1, 2);
	y.Sum();
	y.Prn();
	Mul z(1, 2);
	z.Mult();
	z.Prn();
	return 0;
}