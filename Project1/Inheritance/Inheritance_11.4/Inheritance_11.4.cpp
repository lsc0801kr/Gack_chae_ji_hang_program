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
void Cal::Prn()
{
	cout << a << "\t" << b << "\t" << c << endl;
}
Cal::Cal(int new_A, int new_B) //Cal 매개변수가 있는 생성자
{
	a = new_A;
	b = new_B;
	c = 0;
}
Cal::Cal() //Cal 매개변수가 없는 생성자
{
	a = 0;
	b = 0;
	c = 0;
}
class Add :public Cal{
	//Add는 Cal의 자식
public:
	void Sum();
	Add(int new_A, int new_B);
	Add();
};
void Add::Sum()
{
	c = a + b;
}
Add::Add(int new_A, int new_B) : Cal(new_A, new_B)
//Add는 Add의 생성자이고 매개변수가 있는 부분을 따왔다.
//이때, 부모인 Cal에서 매개변수가 있는 부분을 그대로 따왔다.
//부모의 매개변수를 써줄 때는 자료형은 쓰지 않는다.
{
	c = 0;
}
Add::Add() :Cal()
//Add는 Add의 생성자이고 이때 부모인 Cal의 매개변수를 따온다.
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