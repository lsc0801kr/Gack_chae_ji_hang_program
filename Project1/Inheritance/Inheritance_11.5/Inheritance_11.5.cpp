#include <iostream>
using namespace std;
class Cal {
protected:
	int a;
	int b;
public:
	Cal(); //Cal�� �Ű������� ���� ������
	Cal(int new_A, int new_B); //Cal�� �Ű������� �ִ� ������
	void Prn();
};
Cal::Cal() //�Ű������� ���� ������
{
	a = 0;
	b = 0;
}
Cal::Cal(int new_A, int new_B) //�Ű������� �ִ� ������
{
	a = new_A;
	b = new_B;
}
void Cal::Prn() //Cal�ȿ� �ִ� Prn
{
	cout << a << "\t" << b << endl;
}
class Add : public Cal
{
	//Class Cal�� �θ�� �� Add�ڽ� class����
protected:
	int c;
public:
	Add(); //�Ű������� ���� ������
	Add(int new_A, int new_B); //�Ű������� �ִ� ������
	void Sum();
	void Prn();//�������̵�
	//�θ� class�� �ִ� �Ͱ� ���� �Լ��� �ִ�.
	//�̰��� �Լ� �������̵��̶�� �Ѵ�.
};
Add::Add() :Cal() //�Ű������� ���� ������ �θ� class�� �Ű������� ���´�.
{
}
Add::Add(int new_A, int new_B) : Cal(new_A, new_B)
//�Ű������� �ִ� ������, �θ� class�� �Ű������� ���´�.
{
	c = 0;
}
void Add::Sum()
{
	c = a + b;
}
void Add::Prn()//�������̵�
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
	void Prn(); //�������̵�
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
void Mul::Prn() //�������̵�
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