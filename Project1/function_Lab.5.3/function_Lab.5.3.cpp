//�Լ��� �迭
//�迭 �ȿ� �ִ� �� �Ű����� ���� ���縦 �ϴ� ���� ��ȿ��
//�����͸� �̿��ؼ� �迭�� ���� �ּҸ� �����ϰ�
//�������� ���� ���� ������ �� �ִ�.

//�迭�� �Լ��� �Ű������� ���
//1. �迭�� ����
//2. �迭 ������ ������ ������ ������ ����

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