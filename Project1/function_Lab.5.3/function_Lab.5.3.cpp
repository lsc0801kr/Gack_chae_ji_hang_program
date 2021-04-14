//함수와 배열
//배열 안에 있는 각 매개변수 별로 복사를 하는 것은 비효울
//포인터를 이용해서 배열의 시작 주소만 전달하고
//연산으로 개별 원고에 접근할 수 있다.

//배열이 함수의 매개변수인 경우
//1. 배열의 종류
//2. 배열 원소의 개수를 독립된 정보로 전달

#include <iostream>
using namespace std;

int summation_1(int output[], int elnum);
int summation_2(int *output, int elnum);
int main()
{
	int input[5];
	int size = 5;
	for (int i = 0; i < 5; i++)
	{
		cout << "Input 5 number: ";
		cin >> input[i];
	}
	cout << "Total summation is " << summation_2(input, size) << endl;
	return 0;
}
int summation_1(int output[], int elnum){
	int sum = 0;
	for (int i = 0; i < elnum; i++)
	{
		sum += output[i];
	}
	return sum;
}
int summation_2(int *output, int elnum){
	int sum = 0;
	for (int i = 0; i < elnum; i++)
	{
		sum += output[i];
	}
	return sum;
}