//���� class�� ����Ʈ �����ڰ� �ݵ�� �����ؾ��Ѵ�.
#include <iostream>
using namespace std;
class Cal { //�θ�class(����class)
protected: //���������� ǥ�� �Ʒ� ��������� �ڽ� class���� ���ٰ���
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
//�����ڸ� 2�� ������ !!!�����
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
//�����ڸ� 2�� ������ !!!����
{
	a = new_A;
	b = new_B;
	c = 0;
}
Add::Add() :Cal()
//�־ �ǰ� ��� �ȴ�.
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