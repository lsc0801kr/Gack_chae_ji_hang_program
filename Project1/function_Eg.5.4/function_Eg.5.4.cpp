//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10, b = 20;
//	cout << " a => " << a << " b => " << b << endl;
//	int temp;
//	temp = a; //�ӽ÷� ����ϰڴٴ� ���̴�. ������ ���� �� �뵵�� ������ �� �ִ�!
//	a = b;
//	b = temp;
//	cout << " a => " << a << " b => " << b << endl;
//	return 0;
//}

#include <iostream>
void swap(int a, int b);
using namespace std;

int main()
{
	int a = 10, b = 20;
	cout << "before call: a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "after call: a = " << a << " b = " << b << endl;
	//���� �ٲ��� ����.
	//swap�� �� �۵��ǰ� �ִµ� ���� �ٲ��� ����.
	//int �ȿ� ����� a,b�� swap�ȿ� �ִ� a,b�� ���� ���� ���̴�.
	return 0;
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	//a,b�� swap�ȿ����� ����Ǵ� ���������̱� ������ main�ȿ� �ƹ��� ������
	//��ġ�� ���Ѵ�.
	//cout << "after call: a = " << a << " b = " << b << endl;
}