#include <iostream>
using namespace std;
class Base {
public:
	Base();
	virtual ~Base();
	//~Base();
};
Base::Base()
{
	cout << " Calling a constructor of Base class " << endl;
}
Base::~Base()
{
	cout << " Calling a destructor of Base class" << endl;
}
class Derived : public Base {
public:
	Derived();
	~Derived();
};
Derived::Derived()
{
	cout << " Calling a constructor of Derived class " << endl;
}
Derived::~Derived()
{
	cout << " Calling a destructor of Derived class " << endl;
}
int main()
{
	Base* BasePtr = new Derived;
	//����class�� �ڷ������� ����Ŵ
	//�׷��� virtual�� ���� ������ ���� class�� �ڷ����� �����ȴ�.
	//��� class�� �����Ƿ��� virtual�� ���� �ȴ�.
	cout << "************************" << endl;
	delete BasePtr;
	return 0;
}

//�Ҹ��ڿ� virtual�� ���� �ʴ� ���
//Derived Ŭ������ �Ҹ��� ȣ�� �ȵ�
// new�����ڷ� ���� �޸𸮸� �Ҵ��� �Ļ� Ŭ������ ���� Ŭ������ �����Ͱ� �����ϰ� ����
// ���� ���ε��� ���� ���� �����ϴ� ��ü�� ���� ������� ���� Ŭ������ ������ �����Ϸ��� �õ�