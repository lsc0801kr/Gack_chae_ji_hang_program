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
	point* ptr = p; //p는 p의 주소값이 할당되어 있다.
	
	//구조체 포인터를 배열처럼 사용
	cout << ptr[0].x << ", " << ptr[0].y << endl;
	cout << ptr[1].x << ", " << ptr[1].y << endl << endl;

	//구조체 포인터 변수 사용1
	cout << (*ptr).x << ", " << (*ptr).y << endl;
	//첫번째 원소값에 접근 가능
	cout << (*(ptr + 1)).x << ", " << (*(ptr + 1)).y << endl << endl;
	
	//구조체 포인터 변수사용2
	//ptr자체는 주소를 가지고 있음
	cout << ptr->x << ", " << ptr->y << endl;6.5
	cout << (ptr + 1)->x << ", " << (ptr + 1)->y << endl;

	cout << endl << endl;

	//구조체는 추상적인 자료형(실체가 없음)
	//메모리에는 구조체가 가지는 멤버 변수가 저장
	//배열에서 1개의 원소(구조체 변수)는 2개의 int 형 멤버 변수를
	//가짐==8byte
	//3개의 구조체 변수는 8byte * 3 = 24byte의 메모리 공간 차지

	cout << "size of p " << sizeof(p) << endl;
	cout << "size of ptr " << sizeof(ptr) << endl;
	return 0;
}