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
//	Point p1(10, 20); //10�� 20�� ���ڷ� �޴� ������ ȣ��
//	p1.ShowData();
//
//	Point p2;  //void ������ ȣ��
//	p2.ShowData();
//	return 0;
//}
// ���α׷��Ӱ� ������ ���� �����ڰ� �ϳ��� �����ϸ�
//, default �����ڴ� �ڵ����� ���Ե��� ����!

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