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
	//기초class의 자료형만을 가리킴
	//그래서 virtual을 쓰지 않을면 기초 class의 자료형만 삭제된다.
	//상속 class도 삭제되려면 virtual을 쓰면 된다.
	cout << "************************" << endl;
	delete BasePtr;
	return 0;
}

//소멸자에 virtual을 쓰지 않는 경우
//Derived 클래스의 소멸자 호출 안됨
// new연산자로 동적 메모리를 할당한 파생 클래스를 기초 클래스의 포인터가 지시하고 있음
// 정적 바인딩에 의해 실제 지시하는 객체의 형과 상관없이 기초 클래스의 공간을 삭제하려고 시도