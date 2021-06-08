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
	point* ptr = p; //p�� p�� �ּҰ��� �Ҵ�Ǿ� �ִ�.
	
	//����ü �����͸� �迭ó�� ���
	cout << ptr[0].x << ", " << ptr[0].y << endl;
	cout << ptr[1].x << ", " << ptr[1].y << endl << endl;

	//����ü ������ ���� ���1
	cout << (*ptr).x << ", " << (*ptr).y << endl;
	//ù��° ���Ұ��� ���� ����
	cout << (*(ptr + 1)).x << ", " << (*(ptr + 1)).y << endl << endl;
	
	//����ü ������ �������2
	//ptr��ü�� �ּҸ� ������ ����
	cout << ptr->x << ", " << ptr->y << endl;6.5
	cout << (ptr + 1)->x << ", " << (ptr + 1)->y << endl;

	cout << endl << endl;

	//����ü�� �߻����� �ڷ���(��ü�� ����)
	//�޸𸮿��� ����ü�� ������ ��� ������ ����
	//�迭���� 1���� ����(����ü ����)�� 2���� int �� ��� ������
	//����==8byte
	//3���� ����ü ������ 8byte * 3 = 24byte�� �޸� ���� ����

	cout << "size of p " << sizeof(p) << endl;
	cout << "size of ptr " << sizeof(ptr) << endl;
	return 0;
}