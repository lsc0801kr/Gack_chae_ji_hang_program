#include <iostream>
using namespace std;
class Cal {
protected:
	int a;
	int b;
public:
	Cal(); //Cal의 매개변수가 없는 생성자
	Cal(int new_A, int new_B); //Cal의 매개변수가 있는 생성자
	void Prn();
};
Cal::Cal() //매개변수가 없는 생성자
{
	a = 0;
	b = 0;
}
Cal::Cal(int new_A, int new_B) //매개변수가 있는 생성자
{
	a = new_A;
	b = new_B;
}
void Cal::Prn() //Cal안에 있는 Prn
{
	cout << a << "\t" << b << endl;
}
class Add : public Cal
{
	//Class Cal를 부모로 한 Add자식 class선언
protected:
	int c;
public:
	Add(); //매개변수가 없는 생성자
	Add(int new_A, int new_B); //매개변수가 있는 생성자
	void Sum();
	void Prn();//오버라이딩
	//부모 class에 있는 것과 같은 함수가 있다.
	//이것을 함수 오버라이딩이라고 한다.
};
Add::Add() :Cal() //매개변수가 없는 생성자 부모 class의 매개변수를 따온다.
{
}
Add::Add(int new_A, int new_B) : Cal(new_A, new_B)
//매개변수가 있는 생성자, 부모 class의 매개변수를 따온다.
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