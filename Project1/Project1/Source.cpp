#include <iostream>
using namespace std;

int main()
{
	/*int a = 10;
	cout << "a => " << a << endl;
	cout << "&a => " << &a << endl;
	cout << "*&a => " << *&a << endl;*/


	//���� 4.5
	//int a = 10; //int ���� a ���� ��, 10 �Ҵ�
	//int* p; //������ ���� p����: int* (p)
	//p = &a; //�ʱ�ȭ: int* p =&a

	//cout << "a => " << a << endl; //a���� ��
	//cout << "&a => " << &a << endl; //a������ ����� �޸� �ּ�
	//cout << "p => " << p << endl; //p������=a�� �޸� �ּ�
	//cout << "&p =>" << &p << endl; //p������ ����� �޸� �ּ�
	//cout << "*p => " << *p << endl; //p������ ����� �޸� �ּҰ� ����Ű�� a������
	
	//���� 4.6
	//int a = 10, b = 20;
	//int* p = &a; //"p" linked with "a" ������ ���� ���� a������ �ּҸ� p�� �Ҵ�
	//cout << " a => " << a << " b => " << b << endl; // a=10, b=10
	//cout << " *p => " << *p << endl; //*p==a==*(&a)=10 a�� ����Ǿ� �ִ� �� ���

	//b = *p; // b with 10 assigned from *p=*(&a)=10 p���� ����Ű�� ���� ���� b�� �Ҵ�
	//cout << " a => " << a << " b => " << b << endl; //a=10, b*p=*(&a)=10
	//cout << " *p => " << *p << endl; //*p ==*(&a)=10

	//*p = 30; //*p ==*(&a)=30 a���� ������ 30�Ҵ�
	//cout << " a => " << a << " b => " << b << endl; //a=30, b=10
	//cout << " *p => " << *p << endl; //*p=30
	return 0;
}