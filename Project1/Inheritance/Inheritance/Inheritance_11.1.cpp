//#include <iostream>
//using namespace std;
//
//class Mother {
//protected: //�ڽĿ��� ���Ǵ� private
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
class Cal { //�θ�class(����class)
protected: //���������� ǥ�� �Ʒ� ��������� �ڽ� class���� ���ٰ���
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
class Add :public Cal { //�ڽ� class public �θ�class
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
	Add x; //�ڽ�Ŭ����, ��ü��
	x.Init(1, 2); //.�� ���ؼ� �ʱ�ȭ, init�� �θ�class���� ���ٰ���
	Mul y;
	y.Init(3, 4);
	x.Sum();
	x.Prn();
	y.Mult();
	y.Prn();
	return 0;
}