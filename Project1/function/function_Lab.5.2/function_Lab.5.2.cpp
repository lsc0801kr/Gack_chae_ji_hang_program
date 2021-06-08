#include <iostream>
void swap(int *pa, int *pb);
using namespace std;

int main()
{
	int a = 10, b = 20;
	cout << "before call: a = " << a << " b = " << b << endl;
	
	void swap(&a, &b);

	cout << "after call: a = " << a << " b = " << b << endl;
	return 0;
}
void swap(int *pa, int *pb) //(int* a = &a) 두 a는 다른 값임
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	//a값이 저장되어 있는 메모리와 b값이 저장되어 있는 메모리를 바꾸었다.
}