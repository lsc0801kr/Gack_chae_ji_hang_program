//기초 class에 디폴트 생성자가 반드시 존재해야한다.
#include <iostream>
using namespace std;
class Cal { //부모class(기초class)
protected: //접근지정자 표시 아래 멤버변수를 자식 class에서 접근가능
	int a;
	int b;
	int c;
public:
	void Prn();
	Cal(int new_A, int new_B);
	Cal();
};
void Cal::Prn()
{
	cout << a << "\t" << b << "\t" << c << endl;
}
Cal::Cal(int new_A, int new_B)
//생성자를 2번 정의함 !!!여기랑
{
	a = new_A;
	b = new_B;
	c = 0;
}
Cal::Cal()
{
	a = 0;
	b = 0;
	c = 0;
}
class Add :public Cal {
public:
	void Sum();
	Add(int new_A, int new_B);
	Add();
};
void Add::Sum()
{
	c = a + b;
}
Add::Add(int new_A, int new_B)
//생성자를 2번 정의함 !!!여기랑
{
	a = new_A;
	b = new_B;
	c = 0;
}
Add::Add() :Cal()
//있어도 되고 없어도 된다.
{

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