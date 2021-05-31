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
	cout << a<<"\t" <<b <<endl;
}
class Add :public Cal {
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void Prn();
}; //오버라이딩
Add::Add():Cal()
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
void Add::Prn()
{
	cout << a << " + " << b << " = " << c << endl;
}
int main()
{
	Cal* Calptr;
	Calptr = new Add(1, 2);
	//기초 class형 포인터 변수가 파생 class형 객체를 가리킴
	Calptr->Prn();
	//기초 class의 함수 호출? 파생 class의 함수호출?
	return 0;
}
//객체가 무엇을 지시하는 것이 중요한 것이 아니라, 현재 파생
// class로 선언된 객체를 지시하는 포인터 변수의 클래스형이
// 기초 class라면 기초 class의 멤버 함수 호출