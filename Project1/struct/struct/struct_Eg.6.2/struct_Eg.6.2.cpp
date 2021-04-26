#include <iostream>
struct point
{
	int x;
	int y;
};
int main()
{
	using namespace std;
	point p[3] = { {1,2}, {3,4}, {5,6} };
	//p[3]변수처럼 선언
	//메모리에는 멤버변수가 저장되는 것이다.
	//그래서 메모리에는 4*3=12바이트가 저장된다.
	for (int i = 0; i < 3; i++)
		cout << p[i].x << ", " << p[i].y << endl;
	//.을 포인트라고 이야기한다.
	return 0;
}