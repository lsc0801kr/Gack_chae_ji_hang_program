//class 10-1
//#include <iostream>
//using namespace std;
//
//class Complex
//{
//private:
//	int real;
//	int image;
//public:
//	void SetComplex();
//	void ShowComplex();
//};
//
//void Complex::SetComplex()
//{
//	real = 2;
//	image = 5;
//}
//
//void Complex::ShowComplex()
//{
//	cout << "(" << real << " + " << image << "i )" << endl;
//}
//
//void main()
//{
//	Complex x, y;
//
//	x.SetComplex();
//	x.ShowComplex();
//	y.SetComplex();
//	y.ShowComplex();
//}


//class 10-2
//#include <iostream>
//using namespace std;
//
//class Complex
//{
//private:
//	int real;
//	int image;
//public:
//	void SetComplex();
//	void ShowComplex();
//};
//
//void Complex::SetComplex()
//{
//	real = 2;
//	image = 5;
//}
//
//void Complex::ShowComplex()
//{
//	cout << "(" << real << " + " << image << "i )" << endl;
//}
//
//void main()
//{
//	Complex x;
//	x.real = 5;
//	x.image = 10; //real �̶� image�� private���� class�ȿ� �����Ƿ�
//	//main�Լ� �ȿ����� �� �� ����.
//	x.ShowComplex();
//}


//class 10-3
//#include <iostream>
//using namespace std;
//
//class Complex
//{
//private:
//	int real;
//	int image;
//public:
//	void SetComplex();
//	void ShowComplex();
//	void SetReal(int r);
//	void SetImage(int i);
//};
//
//void Complex::SetComplex()
//{
//	real = 2;
//	image = 5;
//}
//
//void Complex::ShowComplex()
//{
//	cout << "(" << real << " + " << image << "i )" << endl;
//}
//
//void Complex::SetReal(int r)
//{
//	real = r;
//}
//
//void Complex::SetImage(int i)
//{
//	image = i;
//}
//
//void main()
//{
//	Complex x;
//	x.SetReal(5);
//	x.SetImage(10);
//	x.ShowComplex();
//}


//class 10-4
//#include <iostream>
//using namespace std;
//class Complex
//{
//private:
//	int real;
//	int image;
//public:
//	void SetComplex()
//	{
//		real = 2;
//		image = 5;
//	}
//	void ShowComplex();
//};
//
//inline void Complex::ShowComplex()
//{
//	cout << "( " << real << " + " << image << "i )" << endl;
//}
//
//void main()
//{
//	Complex x;
//	x.SetComplex();
//	x.ShowComplex();
//}


//class 10-5 �Լ��� �����ε�
//#include <iostream>
//using namespace std;
//void printstr(char*);
//void printstr(char, int);
//
//void main()
//{
//	printstr("I'm Sorry");
//	printstr('a', 3);
//}
//
//void printstr(char *the_string)
//{
//	cout << the_string << endl;
//}
//void printstr(char the_char, int repeat_cnt)
//{
//	for (int i = 0; i < repeat_cnt; i++)
//		cout << the_char;
//	cout << endl;
//}


//class 10-7 �Լ��� �����ε� ���� ���� ���ϱ�
//#include <iostream>
//using namespace std;
//int myabs(int num)
//{
//	if (num < 0)
//		num =- num;
//	return num;
//}
//
//double fmyabs(double num)
//{
//	if (num < 0)
//		num = -num;
//	return num;
//}
//
//long intlmyabs(long int num)
//{
//	if (num < 0)
//		num = -num;
//	return num;
//}
//
//void main()
//{
//	int a = -10;
//	cout << a << "�� ������ -> " << myabs(a) << endl;
//	double b = -3.4;
//	cout << b << "�� ������ -> " << fmyabs(b) << endl;
//	long int c = -20L;
//	cout << c << "�� ������ -> " << intlmyabs(c) << endl;
//}


//class 10-9
//#include <iostream>
//using namespace std;
//void print(int x, int y, int z)
//{
//	cout << x << " " << y << " " << z << endl;
//}
//void print(int x, int y)
//{
//	cout << x << " " << y << endl;
//}
//void print(int x)
//{
//	cout << x << endl;
//}
//void main()
//{
//	print(10, 20, 30);
//	print(10, 20);
//	print(10);
//}


//class 10-10 �Լ��� �Ű������� �⺻�� �����ϱ�
//#include <iostream>
//using namespace std;
//void print(int x = 0, int y = 0, int z = 0);
//void main()
//{
//	print(10, 20, 30);
//	print(10, 20);
//	print(10);
//	print();
//}
//
//void print(int x, int y, int z)
//{
//	cout << x << " " << y << " " << z << endl;
//}


//class 10-11 �Ű������� ���� ������
#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
	int image;
public:
	Complex();
	void ShowComplex() const;
};

Complex::Complex()
{
	real = 5;
	image = 20;
}

void Complex::ShowComplex()const {
	cout << "( " << real << " + " << image << "i ) " << endl;
}

void main()
{
	Complex x;
	x.ShowComplex();
}