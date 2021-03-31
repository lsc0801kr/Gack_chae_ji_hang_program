#include <iostream>
//int main()
//{
	//포인터
	//예제 4.7
	//포인터의 덧셈과 뺄셈은 숫자의 증가, 감소가 아닌 포인터가 가리키는 위치를 이동시킴!
	//short a[3] = { 0,1,2 }; //3개의 short형 정수가 메모리에 저장
	//int b[3] = { 0,3,6 };
	//cout << " a => " << a << endl;
	//cout << " a+1 => " << a + 1 << endl;
	//cout << " a+2 => " << a + 2 << endl;

	//cout << " b => " << b << endl;
	//cout << " b+1 => " << b + 1 << endl;
	//cout << " b+2 => " << b + 2 << endl;

	//cout << " b[0] => " << b[0] << " *b => " << *b << endl;
	//cout << " b[1] => " << b[1] << " *b+1 => " << *b + 1 << endl;
	//cout << " b[1] => " << b[1] << " *(b+1) => " << *(b+1) << endl;

	//예제 4.8
	//int a[2] = { 10,20 };
	//int* pa = a; //pa = a
	//cout << a[0] << endl;
	//cout << *(a + 1) << endl; //*(a + 1)==a[1]
	//cout << pa[0] << endl;
	//cout << *(pa + 1) << endl;
	//===============================================
	//int a[8] = { 10, 20, 30, 40, 50, 60, 70, 80 };
	//int* pa = a; //a==&a[0]

	////배열을 포인터 처럼 활용
	//cout << a[0] << endl;
	//cout << *(a + 1) << endl;
	////배열이름이지만 포인트 변수처럼사용
	////메모리 첫번째 공간 다음의 메모리 주소가 들어가지고 *를 써 숫자나옴
	//cout << *(&a[0] + 1) << endl;
	//cout << "\n\n\n";

	////point를 배열처럼 활용
	//cout << pa[0] << endl; //포인터를 배열처럼 사용
	//cout << *(pa + 1) << endl; //포인터를 포인터 처럼 사용
	//cout << pa[1] << endl;
	//=====================================================
	/*cout << "\n\n\n";
	cout << "Array size is " << sizeof(a) << endl;
	cout << "Integer size is " << sizeof(int) << endl;
	cout << "Element #(숫자) is " << sizeof(a) / sizeof(int) << endl;
	cout << "\n\n\n";*/
	//=======================================================
	////배열에 저장된 원소의 개수
	//int s = sizeof(a) / sizeof(int);  //8

	////"배열에 저장된 원소의 개수" 정보를 이용하여, 배열로 원소를 출력
	//for (int i = 0; i < s; i++) {
	//	cout << a[i] << "  ";
	//}
	//cout << "\n\n\n";
	////"배열에 저장된 원소의 개수" 정보를 이용하여, 포인터로 원소를 출력
	//for (int i = 0; i < s; i++) {
	//	cout << *(pa + i) << "  "; //pa=a
	//}
	//cout << "\n\n\n";
	////"배열에 저장된 원소의 개수" 정보를 이용하여, 배열을 포인터처럼 이용하여 원소를 출력
	//for (int i = 0; i < s; i++) {
	//	cout << *(a + i) << "  "; //pa=a
	//}
//=============================================================
	/*int global_a = 0;
	int first_function(int i)
	{
		return i * 100;
	}
	int main()
	{
		using namespace std;
		int a = 1, b = 0;
		b = first_function(a);
			cout << b << endl;
		return 0;
	}*/
//==============================================================


//
//	return 0;
//}