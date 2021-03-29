#include <iostream>
using namespace std;

int main()
{
	/*int a = 10;
	cout << "a => " << a << endl;
	cout << "&a => " << &a << endl;
	cout << "*&a => " << *&a << endl;*/


	//예제 4.5
	//int a = 10; //int 변수 a 선언 후, 10 할당
	//int* p; //포인터 변수 p선언: int* (p)
	//p = &a; //초기화: int* p =&a

	//cout << "a => " << a << endl; //a변수 값
	//cout << "&a => " << &a << endl; //a변수가 저장된 메모리 주소
	//cout << "p => " << p << endl; //p변수값=a의 메모리 주소
	//cout << "&p =>" << &p << endl; //p변수가 저장된 메모리 주소
	//cout << "*p => " << *p << endl; //p변수에 저장된 메모리 주소가 가르키는 a변수값
	
	//예제 4.6
	//int a = 10, b = 20;
	//int* p = &a; //"p" linked with "a" 포인터 변수 선언 a변수의 주소를 p에 할당
	//cout << " a => " << a << " b => " << b << endl; // a=10, b=10
	//cout << " *p => " << *p << endl; //*p==a==*(&a)=10 a에 저장되어 있는 값 출력

	//b = *p; // b with 10 assigned from *p=*(&a)=10 p에서 가리키는 변수 값을 b에 할당
	//cout << " a => " << a << " b => " << b << endl; //a=10, b*p=*(&a)=10
	//cout << " *p => " << *p << endl; //*p ==*(&a)=10

	//*p = 30; //*p ==*(&a)=30 a변수 공간에 30할당
	//cout << " a => " << a << " b => " << b << endl; //a=30, b=10
	//cout << " *p => " << *p << endl; //*p=30
	return 0;
}