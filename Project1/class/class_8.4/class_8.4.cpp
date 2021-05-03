//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int _x, int _y)
//	{
//		x = _x, y = _y;
//	}
//	void ShowData()
//	{
//		cout << x << ' ' << y << endl;
//	}
//};
//
//int main()
//{
//	Point p1(10, 20); //10과 20을 인자로 받는 생성자 호출
//	p1.ShowData();
//
//	Point p2;  //void 생성자 호출
//	p2.ShowData();
//	return 0;
//}
// 프로그래머가 정의해 놓은 생성자가 하나라도 존재하면
//, default 생성자는 자동응로 삽입되지 않음!

#include<iostream>
using namespace std;
class Point
{
	int x, y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(int _x, int _y)
	{
		x = _x, y = _y;
	}
	void ShowData()
	{
		cout << x << ' ' << y << endl;
	}
};

int main()
{
	Point p1(10, 20);
	p1.ShowData();
	Point p2;
	p2.ShowData();
	return 0;
}