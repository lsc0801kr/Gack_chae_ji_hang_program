////#include <iostream>
////using namespace std;
////void show() {
////	cout << "******" << endl;
////
////	return ;
////}
////void main() {
////	cout << "함수 호출하기 전" << endl;
////	show(); //함수 호출
////	cout << "함수 호출한 후" << endl;
////}
//#include <iostream>
//using namespace std;
//
//int sum(int a, int b)
//{
//	cout << "a + b = " << a + b << endl;
//	return a + b;
//}
//int main()
//{
//	int a = 10; int b = 20;
//	sum(a, b);
//	sum(4, 5);
//}

//예제 5.1
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 10;
//	cout << "변수 a에 저장된 값 => " << a << endl;
//	cout << "변수 a의 주소 => " << &a << endl;
//	cout << "변수 a에 저장된 값 => " << *&a << endl;
//}

//예제 5.2
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 10;
//	int* p;
//	p = &a;
//	cout << " a => " << a << endl;
//	cout << " &a => " << &a << endl;
//	cout << " p => " << p << endl;
//	cout << " *p => " << *p << endl;
//}

////예제 5.3
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 10, b = 20;
//	int* p = &a;
//	cout << " a => " << a << " b => " << b << endl;
//	cout << " *p => " << *p << endl;
//	b = *p;
//	cout << " a => " << a << " b => " << b << endl;
//	cout << " *p => " << *p << endl;
//	*p = 30;
//	cout << " a => " << a << " b => " << b << endl;
//	cout << " *p => " << *p << endl;
//}

////예제 5.4
//#include <iostream>
//using namespace std;
//int add(int x, int y);
//void main()
//{
//	int a = 10, b = 20, sum;
//	sum = add(a, b);
//	cout << " sum = " << sum << endl;
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return(z); 
//}

////예제 5.5
//#include <iostream>
//using namespace std;
//void absolute(int a);
//void main()
//{
//	int a = -10;
//	cout << " main에서 함수 호출 전 a 값 = " << a << endl;
//	absolute(a);
//	cout << " main에서 함수 호출 수 a 값 = " << a << endl;
//	//absolute에서 a의 값이 바뀌었다고 해서 main안에서도 바뀐 것은 아니다.
//}
//void absolute(int a)
//{
//	if (a < 0)
//		a = -a;
//	cout << "absolute 함수에서의 a값 = " << a << endl;
//}

////예제 5.6
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 10, b = 20;
//	cout << " a => " << a << " b => " << b << endl;
//	int t;
//	t = a;
//	a = b;
//	b = t;
//	cout << " a=> " << a << " b => " << b << endl;
//}

////예제 5.7
//#include <iostream>
//using namespace std;
//void swap(int a, int b);
//void main()
//{
//	int a = 10, b = 20;
//	cout << " a => " << a << " b => " << b << endl;
//	swap(a, b);
//	cout << " a => " << a << " b => " << b << endl;
//}
//void swap(int a, int b)
//{
//	int t;
//	t = a;
//	a = b;
//	b = t;
//}

////예제 5.8
//#include <iostream>
//using namespace std;
//void swap(int* pa, int* pb);
//void main()
//{
//	int a = 10, b = 20;
//	cout << " a => " << a << " b => " << b << endl;
//	swap(&a, &b);
//	//a와 b의 주소 자체를 바꿔주었다.
//	cout << " a => " << a << " b => " << b << endl;
//}
//void swap(int* pa, int* pb)
//{
//	int t;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}