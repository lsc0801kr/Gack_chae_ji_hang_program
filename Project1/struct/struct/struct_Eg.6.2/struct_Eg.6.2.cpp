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
	//p[3]����ó�� ����
	//�޸𸮿��� ��������� ����Ǵ� ���̴�.
	//�׷��� �޸𸮿��� 4*3=12����Ʈ�� ����ȴ�.
	for (int i = 0; i < 3; i++)
		cout << p[i].x << ", " << p[i].y << endl;
	//.�� ����Ʈ��� �̾߱��Ѵ�.
	return 0;
}