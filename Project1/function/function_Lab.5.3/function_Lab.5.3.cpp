//�Լ��� �迭
//�迭 �ȿ� �ִ� �� �Ű����� ���� ���縦 �ϴ� ���� ��ȿ��
//�����͸� �̿��ؼ� �迭�� ���� �ּҸ� �����ϰ�
//�������� ���� ���� ������ �� �ִ�.

//�迭�� �Լ��� �Ű������� ���
//1. �迭�� ����
//2. �迭 ������ ������ ������ ������ ����

//#include <iostream>
//using namespace std;
//
//int summation_1(int output[], int elnum);
//int summation_2(int *output, int elnum);
//int main()
//{
//	int input[5];
//	int size = 5;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Input 5 number: ";
//		cin >> input[i];
//	}
//	cout << "Total summation is " << summation_1(input, size) << endl;
//	return 0;
//}
//int summation_1(int output[], int elnum){
//	int sum = 0;
//	for (int i = 0; i < elnum; i++)
//	{
//		sum += output[i];
//	}
//	return sum;
//}
//int summation_2(int *output, int elnum){
//	int sum = 0;
//	for (int i = 0; i < elnum; i++)
//	{
//		sum += output[i];
//	}
//	return sum;
//}

#include <iostream>
using namespace std;
int addq(int arr[], int size);
int main()
{
	int arr[5];
	for (int i = 0; i < size(arr); i++)
	{
		cout << "Input " << i + 1 << "st number : ";
		cin >> arr[i];
	}
	cout << "Total number is : " << addq(arr, 5) << endl;
	return 0;
}
int addq(int arr[], int size)
{
	int sum = 0;
	for (int j = 0; j < size; j++)
	{
		sum += arr[j];
	}
	return sum;
}