//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 10, b = 20;
//	cout << " a => " << a << " b => " << b << endl;
//	int temp;
//	temp = a; //임시로 사용하겠다는 뜻이다. 변수명 지을 때 용도를 유추할 수 있다!
//	a = b;
//	b = temp;
//	cout << " a => " << a << " b => " << b << endl;
//	return 0;
//}

#include <iostream>
void swap(int pa, int pb);
using namespace std;

int main()
{
	int a = 10, b = 20;
	cout << "before call: a = " << a << " b = " << b << endl;
	swap(a, b);
	cout << "after call: a = " << a << " b = " << b << endl;
	//값이 바뀌지 않음.
	//swap이 잘 작동되고 있는데 값이 바뀌지 않음.
	//int 안에 선언된 a,b랑 swap안에 있는 a,b는 값만 같은 뿐이다.
	return 0;
}
void swap(int pa, int pb)
{
	int temp;
	temp = pa;
	pa = pb;
	pb = temp;
	//a,b는 swap안에서만 적용되는 지역변수이기 때문에 main안에 아무런 영향을
	//끼치지 못한다.
	//cout << "after call: a = " << a << " b = " << b << endl;
}