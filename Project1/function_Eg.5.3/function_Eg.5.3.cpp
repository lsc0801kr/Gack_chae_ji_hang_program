////참조 변수는 일종의 별칭이다.
////따로 메모리 공간에 할당되지 않는다.
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	//주소를 선언한 것이 아니라 참조를 선언한 것이다.
//	//변수 선언 시 사용된 '&'는 모두 참조이고 나머지는 다 주소
//	//a의 또 다른 이름은 b라고 부를 수 있다.
//	//기존에 참조할 변수가 선언이 되어 있는 상태에서 쓸 수 있다
//	cout << " a = " << a << " b = " << b << endl;
//	b += 300;
//	//b는 a의 참조이다.
//	//b자체가 a이기 때문에 a에도 값을 더하게 된다.
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
//실 매개변수인 a, b를 각각 x,y로 참조를 선언한 것이다.
//int &x=a, int &y=b
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}