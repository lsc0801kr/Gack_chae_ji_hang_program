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
}; //�������̵�
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
	//���� class�� ������ ������ �Ļ� class�� ��ü�� ����Ŵ
	Calptr->Prn();
	//���� class�� �Լ� ȣ��? �Ļ� class�� �Լ�ȣ��?
	return 0;
}
//��ü�� ������ �����ϴ� ���� �߿��� ���� �ƴ϶�, ���� �Ļ�
// class�� ����� ��ü�� �����ϴ� ������ ������ Ŭ��������
// ���� class��� ���� class�� ��� �Լ� ȣ��