#include <iostream>
using namespace std;

class Base {
public:
	Base();
	~Base();
};
Base::Base()
{
	cout << "A. calling a constructor of the Base class " << endl;
}
Base::~Base()
{
	cout << "B. calling a dectructor of the Base calss " << endl;
}
class Derived :public Base {
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
	Derived obj; //자식class 객체생성
	cout << "*************" << endl;
	return 0; //역순으로 소멸자가 호출된다.
}
//생성자는 멤버함수이지만, 상속 불가능