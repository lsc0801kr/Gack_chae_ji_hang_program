////#include <iostream>
////using namespace std;
////
////int summation_1(int output[][3], int elnum);
////int main()
////{
////	int input[2][3];
////	for (int i = 0; i < 2; i++)
////	{
////		for (int j = 0; j < 3; j++) {
////			cin >> input[i][j];
////		}
////		cout << endl;
////	}
////
////	cout << "Total summation is " << summation_1(input, 3) << endl;
////	return 0;
////}
////int summation_1(int output[][3], int elnum) {
////	int sum = 0;
////	for (int i = 0; i < 2; i++)
////	{
////		for (int j = 0; j < 3; j++)
////			sum+= output[i][j];
////	}
////	return sum;
////}
////
//////±³¼ö´Ô Ç®ÀÌ
////#include <iostream>
////using namespace std;
////int function(int output[][3], int elnum)
////{
////	int sum = 0;
////	for (int i = 0; i < elnum; i++) {
////		cout << *(*output + i) << endl;
////		sum += *(*output + i);
////	}
////	return sum;
////}
////int function_2(int (*output)[3], int elnum)
////{
////	int sum = 0;
////	for (int i = 0; i < elnum; i++) {
////		cout << *(*output + i) << endl;
////		sum += *(*output + i);
////	}
////	return sum;
////}
////int main()
////{
////	int input[2][3] = { {1,1,1},{1,1,1} };
////	int size = sizeof(input) / sizeof(int);
////	int total = 0;
////	total = function_2(input, size);
////	cout << total << endl;
////	return 0;
////}
////
//#include <iostream>
//using namespace std;
//int add(int (*output)[3], int size)
//{
//	int sum = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			sum += output[i][j];
//	}
//	return sum;
//}
//int main()
//{
//	int arr[2][3];
//	int size = sizeof(arr) / sizeof(int);
//	cout << "sizeof(arr)" << sizeof(arr) << endl;
//	cout << "sizeof(int)" << sizeof(int) << endl;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> arr[i][j];
//		}
//		cout << endl;
//	}
//	int total = 0;
//	total= add(arr, size);
//	cout << total << endl;
//	return 0;
//}
// 

#include <iostream>
using namespace std;

class Rectangle
{
private:
	int a, b;
	double length = 0;
	double wide = 0;
public:
	Rectangle(int i = 0, int j = 0);
	double GetArea();
	double GetGirth();
};

Rectangle::Rectangle(int i, int j)
{
	a = i;
	b = j;
}

double Rectangle::GetArea()
{
	length = 2 * (a + b);
	return length;
}

double Rectangle::GetGirth()
{
	wide = a * b;
	return wide;
}

class Circle
{
private:
	int a;
	double area = 0;
	double girth = 0;
public:
	Circle(int i = 0);
	double GetArea();
	double GetGirth();
};

Circle::Circle(int i)
{
	a = i;
}

double Circle::GetArea()
{
	area = a * a * 3.141592;
	return area;
}

double Circle::GetGirth()
{
	girth = a * 2 * 3.141592;
	return girth;
}

int main()
{
	Rectangle rec(3, 4);
	cout << "Area: " << rec.GetArea() << endl;
	cout << "Girth: " << rec.GetGirth() << endl;

	Circle cir(5);
	cout << "Area: " << cir.GetArea() << endl;
	cout << "Girth: " << cir.GetGirth() << endl;
	return 0;
}