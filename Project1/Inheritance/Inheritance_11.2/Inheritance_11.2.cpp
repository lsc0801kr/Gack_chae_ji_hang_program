#include <iostream>
using namespace std;

class Base {
public:
	Base(); //������
	~Base(); //�Ҹ���
};
Base::Base()
{
	cout << "A. calling a constructor of the Base class " << endl;
}
Base::~Base()
{
	cout << "B. calling a dectructor of the Base calss " << endl;
}
class Derived :public Base{
public:
	Derived();
	~Derived();
};
Derived::Derived()
{
	cout << "a. calling a constructor of the Derived class " << endl;
}
Derived::~Derived()
{
	cout << "b. calling a destructor of the Derived class " << endl;
}
int main()
{
	Derived obj; //�ڽ�class ��ü����
	cout << "*************" << endl;
	return 0; //�������� �Ҹ��ڰ� ȣ��ȴ�.
}
//�����ڴ� ����Լ�������, ��� �Ұ���