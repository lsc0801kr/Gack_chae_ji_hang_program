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
	//cout << "p3[1]�� " << p3[1] << "�Դϴ�." << endl;
	//p3 = p3 + 1;
	//cout << "������ p3[0]�� " << p3[0] << "�̰�";
	//cout << "p3[1]�� " << p3[1] << "�Դϴ�." << endl;
	//p3 = p3 - 1; //���� ��ġ�� ���ư����� �������.
	//cout << "p3[0]�� " << p3[0] << "�̰�";
	//cout << "p3[1]�� " << p3[1] << "�Դϴ�." << endl;
	//delete[]p3; //�޸� ����

	//Eg.4.10
	//const int MAX_INPUT = 256; //���ó�� �빮�ڷ� �ַ� ���������� �Ѵ�.
	//char input[MAX_INPUT] = { 0 }; //���ڿ� ũ��: 256, �� ĭ�� 0�� �ִ´�
	//int length, ch;
	
	//cout << "Enter what you want to convert" << endl;
	//cin.getline(input, MAX_INPUT); //���ڿ� �Է��� �޴´�.
	//length = strlen(input) + 1; //���ڿ��� ����� input���̸� �� �� ���
	////�ڿ� null�̶�� ������ �Ҵ�Ǳ� �����̴�.
	//char* output = new char[length]; //�����迭 ����

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
	////���������� �Ҵ��� �� output���� �����Ͽ���.

	//lab 4.3
	int a[2][4] = { {1,2,3,4}, {5,6,7,8} };
	//[1]: �迭�� �̿��Ͽ� ���� ���
	//�Ʒ� �ڵ带 �̿��Ͽ� ����� ����ϰ� �ؼ��Ͻÿ�.
	cout << "[1]" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << &a[i][j] << "   " << a[i][j] << endl;
		}
	}
	cout << endl << endl;
	//[2]: �迭�� �����͸� �̿��Ͽ� ���� ���
	//�Ʒ� �ڵ带 �̿��Ͽ� ����� ����ϰ� �ؼ��Ͻÿ�
	//a[0]�� a[1] ��°� �ǹ̴�?

	cout << "[2]" << endl;
	for (int i = 0; i < 2; i++) {
		cout << a[i] << "   " << *a[i] << endl;
	}
	//ù��° ������ ���� �ּҸ� �Է��Ͻÿ� ��� ��

	cout << endl << endl;

	cout << "[3-1]" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << *(a + i) + j << "   " << *(*(a + i) + j) << endl;
			//**a==a[0][0] ���� 2����� 2���� �迭�� ����� ���尪�� ���ٰ���
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

	//[4]:�迭�� �ּҸ� �����ϱ� ���� ������ ����
	//int **p(�߸� ����� ������ ����)
	//int (*p)[4]; �ùٸ��� ����� ������ ����
	//�Ʒ� �ڵ带 �̿��Ͽ� ����� ����ϰ� �ؼ��Ͻÿ�

	cout << "[4]" << endl;
	//int a[2][4] = { {1,2,3,4},{5,6,7,8} };
	//
	int(*p)[4] = a;
	//�� �޸� ������ ��� ���� �������� �����Ǵ��� ����
	//(�� ���� ��� ���� ����)
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << &(*(p + i))[j] << "   " << (*(p + i))[j] << endl;
			//*(a+i)==a[i]
		}
	}
	cout << endl << endl;
	return 0;
}