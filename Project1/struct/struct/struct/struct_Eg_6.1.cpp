#include <iostream>

struct point
{
	int x;
	int y;
};

int main()
{
	using namespace std;
	point p1 = { 1,2 };
	point p2;
	p2 = p1; //����ü�� �Ϲ� ������ ���������� ���� �Ҵ��� ����
	cout << p1.x << ", " << p1.y << endl;
	cout << p2.x << ", " << p2.y << endl;
	return 0;
}