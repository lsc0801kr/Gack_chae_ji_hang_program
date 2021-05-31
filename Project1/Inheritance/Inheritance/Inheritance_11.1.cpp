//#include <iostream>
//using namespace std;
//
//class Mother {
//protected: //자식에게 허용되는 private
//	int m_i;
//public:
//	void setValue(const int& i_in)
//	{
//		m_i = i_in;
//	}
//	int getValue()
//	{
//		return m_i;
//	}
//};
//
//class Child :public Mother // derived class
//{
//private:
//
//	double m_d;
//public:
//	void setValue(const int& i_in, const double& d_in)
//	{
//		m_i=d_in;
//	}
//	void setValue(const double& d_in)
//	{
//		m_d = d_in;
//	}
//	double getValue()
//	{
//		return m_d;
//	}
//};
//
//class Dauther :public Mother
//{
//
//};
//
//class Son :public Mother
//{
//
//};
//
//int main()
//{
//	Mother mother;
//	mother.setValue(1024);
//	cout << mother.getValue() << endl;
//
//	Child child;
//	child.setValue(128);
//	cout << child.getValue() << endl;
//	return 0;
//}

#include <iostream>
using namespace std;
class Cal { //부모class(기초class)
protected: //접근지정자 표시 아래 멤버변수를 자식 class에서 접근가능
	int a;
	int b;
	int c;
public:
	void Init(int new_A, int new_B);
	void Prn();
};
void Cal::Init(int new_A, int new_B)
{
	a = new_A;
	b = new_B;
	c = 0;
}
void Cal::Prn()
{
	cout << a << "\t" << b << "\t" << c << endl;
}
class Add :public Cal { //자식 class public 부모class
public:
	void Sum();
};
void Add::Sum()
{
	c = a + b;
}
class Mul :public Cal {
public:
	void Mult();
};
void Mul::Mult()
{
	c = a * b;
}
int main()
{
	Add x; //자식클래스, 객체명
	x.Init(1, 2); //.을 통해서 초기화, init은 부모class지만 접근가능
	Mul y;
	y.Init(3, 4);
	x.Sum();
	x.Prn();
	y.Mult();
	y.Prn();
	return 0;
}