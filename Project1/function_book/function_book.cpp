////#include <iostream>
////using namespace std;
////void show() {
////	cout << "******" << endl;
////
////	return ;
////}
////void main() {
////	cout << "�Լ� ȣ���ϱ� ��" << endl;
////	show(); //�Լ� ȣ��
////	cout << "�Լ� ȣ���� ��" << endl;
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

//���� 5.1
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 10;
//	cout << "���� a�� ����� �� => " << a << endl;
//	cout << "���� a�� �ּ� => " << &a << endl;
//	cout << "���� a�� ����� �� => " << *&a << endl;
//}

//���� 5.2
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

////���� 5.3
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

////���� 5.4
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

////���� 5.5
//#include <iostream>
//using namespace std;
//void absolute(int a);
//void main()
//{
//	int a = -10;
//	cout << " main���� �Լ� ȣ�� �� a �� = " << a << endl;
//	absolute(a);
//	cout << " main���� �Լ� ȣ�� �� a �� = " << a << endl;
//	//absolute���� a�� ���� �ٲ���ٰ� �ؼ� main�ȿ����� �ٲ� ���� �ƴϴ�.
//}
//void absolute(int a)
//{
//	if (a < 0)
//		a = -a;
//	cout << "absolute �Լ������� a�� = " << a << endl;
//}

////���� 5.6
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

////���� 5.7
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

////���� 5.8
//#include <iostream>
//using namespace std;
//void swap(int* pa, int* pb);
//void main()
//{
//	int a = 10, b = 20;
//	cout << " a => " << a << " b => " << b << endl;
//	swap(&a, &b);
//	//a�� b�� �ּ� ��ü�� �ٲ��־���.
//	cout << " a => " << a << " b => " << b << endl;
//}
//void swap(int* pa, int* pb)
//{
//	int t;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}