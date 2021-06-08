#include <iostream>
using namespace std;
class Cal {
protected:
	int a;
	int b;
public:
	Cal();
	Cal(int new_A, int new_B);
	//void Prn(); //-> 기초 class타입에 들어감
	virtual void Prn(); //-> new라는 키워드랑 함께 add로 가고
	//객체의 주소가 저장되는 시점은 실행시점
	//실행시점의 함수로 불러가기 때문에 상속받은 부분으로 간다.
};
Cal::Cal() //매개변수가 없는 생성자
{
	a = 0;
	b = 0;
}
Cal::Cal(int new_A, int new_B) //매개변수가 있는 생성자
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
	void Prn(); //오버라이딩
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
void Add::Prn() //오버라이딩
{
	cout << "Add::Prn" << endl;
	cout << a << " + " << b << " = " << c << endl;
}
int main()
{
	Cal* Calptr;
	Calptr = new Add(1, 2); //Cal 안에있는 Add중 매개변수가 있는 것을 가리킴
	//기초 class형 포인터 변수가 파생 class형 객체를 가리킴
	Calptr->Prn(); //Cal안에 있는 Prn을 호출한다.(기초 class의 함수를 호출)
	//기초 class의 함수 호출? 파생 class의 함수호출?
	return 0;
}
//객체가 무엇을 지시하는 것이 중요한 것이 아니라, 현재 파생
// class로 선언된 객체를 지시하는 포인터 변수의 클래스형이
// 기초 class라면 기초 class의 멤버 함수 호출