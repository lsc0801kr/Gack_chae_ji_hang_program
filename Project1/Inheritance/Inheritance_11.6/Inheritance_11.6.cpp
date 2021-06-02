#include <iostream>
using namespace std;
class Cal {
protected:
	int a;
	int b;
public:
	Cal();
	Cal(int new_A, int new_B);
	//void Prn(); //-> ���� classŸ�Կ� ��
	virtual void Prn(); //-> new��� Ű����� �Բ� add�� ����
	//��ü�� �ּҰ� ����Ǵ� ������ �������
	//��������� �Լ��� �ҷ����� ������ ��ӹ��� �κ����� ����.
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
void Cal::Prn()
{
	cout << "Cal::Prn" << endl;
	cout << a<<"\t" <<b <<endl;
}
class Add :public Cal {
protected:
	int c;
public:
	Add();
	Add(int new_A, int new_B);
	void Sum();
	void Prn(); //�������̵�
};
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
void Add::Prn() //�������̵�
{
	cout << "Add::Prn" << endl;
	cout << a << " + " << b << " = " << c << endl;
}
int main()
{
	Cal* Calptr;
	Calptr = new Add(1, 2); //Cal �ȿ��ִ� Add�� �Ű������� �ִ� ���� ����Ŵ
	//���� class�� ������ ������ �Ļ� class�� ��ü�� ����Ŵ
	Calptr->Prn(); //Cal�ȿ� �ִ� Prn�� ȣ���Ѵ�.(���� class�� �Լ��� ȣ��)
	//���� class�� �Լ� ȣ��? �Ļ� class�� �Լ�ȣ��?
	return 0;
}
//��ü�� ������ �����ϴ� ���� �߿��� ���� �ƴ϶�, ���� �Ļ�
// class�� ����� ��ü�� �����ϴ� ������ ������ Ŭ��������
// ���� class��� ���� class�� ��� �Լ� ȣ��