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
Cal::Cal(int new_A, int new_B) //Cal �Ű������� �ִ� ������
{
	a = new_A;
	b = new_B;
	c = 0;
}
Cal::Cal() //Cal �Ű������� ���� ������
{
	a = 0;
	b = 0;
	c = 0;
}
class Add :public Cal{
	//Add�� Cal�� �ڽ�
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
//Add�� Add�� �������̰� �Ű������� �ִ� �κ��� ���Դ�.
//�̶�, �θ��� Cal���� �Ű������� �ִ� �κ��� �״�� ���Դ�.
//�θ��� �Ű������� ���� ���� �ڷ����� ���� �ʴ´�.
{
	c = 0;
}
Add::Add() :Cal()
//Add�� Add�� �������̰� �̶� �θ��� Cal�� �Ű������� ���´�.
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