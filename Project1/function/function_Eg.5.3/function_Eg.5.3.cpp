////���� ������ ������ ��Ī�̴�.
////���� �޸� ������ �Ҵ���� �ʴ´�.
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	//�ּҸ� ������ ���� �ƴ϶� ������ ������ ���̴�.
//	//���� ���� �� ���� '&'�� ��� �����̰� �������� �� �ּ�
//	//a�� �� �ٸ� �̸��� b��� �θ� �� �ִ�.
//	//������ ������ ������ ������ �Ǿ� �ִ� ���¿��� �� �� �ִ�
//	cout << " a = " << a << " b = " << b << endl;
//	b += 300;
//	//b�� a�� �����̴�.
//	//b��ü�� a�̱� ������ a���� ���� ���ϰ� �ȴ�.
//	cout << " b = " << b << endl;
//	cout << " a = " << a << endl;
//	return 0;
//}

#include <iostream>
void swap(int& x, int& y);
using namespace std;
int main()
{
	int a = 1, b = 2;
	cout << "before call: a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "after call: a = " << a << " b = " << b << endl;
	return 0;
}
void swap(int& x, int& y)
//�� �Ű������� a, b�� ���� x,y�� ������ ������ ���̴�.
//int &x=a, int &y=b
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}