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
//	x.image = 10; //real 이랑 image는 private으로 class안에 있으므로
//	//main함수 안에서는 쓸 수 없다.
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


//class 10-5 함수의 오버로딩
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


//class 10-7 함수의 오버로딩 없이 절댓값 구하기
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
//	cout << a << "의 절댓값은 -> " << myabs(a) << endl;
//	double b = -3.4;
//	cout << b << "의 절댓값은 -> " << fmyabs(b) << endl;
//	long int c = -20L;
//	cout << c << "의 절댓값은 -> " << intlmyabs(c) << endl;
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


//class 10-10 함수의 매개변수에 기본값 지정하기
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


//class 10-11 매개변수가 없는 생성자
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