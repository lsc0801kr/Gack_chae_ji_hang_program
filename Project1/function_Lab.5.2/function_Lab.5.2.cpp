#include <iostream>
void swap(int *a, int *b);
using namespace std;

int main()
{
	int a = 10, b = 20;
	cout << "before call: a = " << a << " b = " << b << endl;
	
	swap(&a, &b);

	cout << "after call: a = " << a << " b = " << b << endl;
	return 0;
}
void swap(int *pa, int *pb) //(int* a = &a) �� a�� �ٸ� ����
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	//a���� ����Ǿ� �ִ� �޸𸮿� b���� ����Ǿ� �ִ� �޸𸮸� �ٲپ���.
}