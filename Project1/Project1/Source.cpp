#include <iostream>


int main()
{
	using namespace std;
	//Eg.4.9
	//double* p3 = new double[3];
	//p3[0] = 0.2;
	//p3[1] = 0.5;
	//p3[2] = 0.8;
	////==double* p3 = new double[3]{0.2,0.5,0.8};
	//cout << "p3[1]은 " << p3[1] << "입니다." << endl;
	//p3 = p3 + 1;
	//cout << "이제는 p3[0]이 " << p3[0] << "이고";
	//cout << "p3[1]이 " << p3[1] << "입니다." << endl;
	//p3 = p3 - 1; //원래 위치로 돌아가도록 만들었다.
	//cout << "p3[0]은 " << p3[0] << "이고";
	//cout << "p3[1]은 " << p3[1] << "입니다." << endl;
	//delete[]p3; //메모리 해제

	//Eg.4.10
	//const int MAX_INPUT = 256; //상수처리 대문자로 주로 변수선언을 한다.
	//char input[MAX_INPUT] = { 0 }; //문자열 크기: 256, 각 칸에 0을 넣는다
	//int length, ch;
	
	//cout << "Enter what you want to convert" << endl;
	//cin.getline(input, MAX_INPUT); //문자열 입력을 받는다.
	//length = strlen(input) + 1; //문자열이 저장된 input길이를 알 때 사용
	////뒤에 null이라는 변수가 할당되기 때문이다.
	//char* output = new char[length]; //동적배열 선언

	//for (ch = 0; ch < length; ch++)
	//{
	//	if (input[ch] >= 'a' && input[ch] <= 'z')
	//		output[ch] = input[ch] + 'A' - 'a';
	//	//output[ch] = input[ch] -32;
	//	else
	//		output[ch] = input[ch];
	//}

	//cout << "input: " << input << endl;
	//cout << "output: " << output << endl;
	//delete[]output;
	////마직막으로 할당을 할 output으로 해제하였다.

	//lab 4.3
	int a[2][4] = { {1,2,3,4}, {5,6,7,8} };
	//[1]: 배열을 이용하여 원소 출력
	//아래 코드를 이용하여 결과를 출력하고 해석하시오.
	cout << "[1]" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << &a[i][j] << "   " << a[i][j] << endl;
		}
	}
	cout << endl << endl;
	//[2]: 배열과 포인터를 이용하여 원소 출력
	//아래 코드를 이용하여 결과를 출력하고 해석하시오
	//a[0]과 a[1] 출력값 의미는?

	cout << "[2]" << endl;
	for (int i = 0; i < 2; i++) {
		cout << a[i] << "   " << *a[i] << endl;
	}
	//첫번째 공간의 시작 주소를 입력하시오 라는 뜻

	cout << endl << endl;

	cout << "[3-1]" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << *(a + i) + j << "   " << *(*(a + i) + j) << endl;
			//**a==a[0][0] 별을 2번써야 2차원 배열에 저장된 저장값에 접근가능
			//a[i][j]==*(*(a+i)+j)
		}
	}
	cout << endl << endl;
	cout << "[3-2]" << endl;
	int size = sizeof(a) / sizeof(int);
	for (int i = 0; i < size; i++) {
		cout << (*a + i) << "   " << *(*a + i) << endl;
	}
	cout << endl << endl;

	//[4]:배열의 주소를 저장하기 위한 포인터 변수
	//int **p(잘못 선언된 포인터 변수)
	//int (*p)[4]; 올바르게 선언된 포인터 변수
	//아래 코드를 이용하여 결과를 출력하고 해석하시오

	cout << "[4]" << endl;
	//int a[2][4] = { {1,2,3,4},{5,6,7,8} };
	//
	int(*p)[4] = a;
	//각 메모리 공간이 몇개의 세부 공간으로 구성되는지 정보
	//(각 행이 몇개의 열로 구성)
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << &(*(p + i))[j] << "   " << (*(p + i))[j] << endl;
			//*(a+i)==a[i]
		}
	}
	cout << endl << endl;
	return 0;
}