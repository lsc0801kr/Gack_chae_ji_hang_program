//#include <iostream>
//using namespace std;
//
//double cube(double x);
//int main() {
//	double q = cube(1.2);
//	cout << q << endl;
//}
//double cube(double x)
//	{
//		return x * x * x;
//	}

//#include <iostream>
//using namespace std;
//void simple_1(); //�Լ� ����
//void simple_2(); //�Լ� ���� void:�ƹ� ���� ��ȯ���� �ʴ´ٴ� ��
//int main()
//{
//	cout << "main() sill call the 1st simple() function:" << endl << endl;
//	simple_1(); //�Լ� ȣ��
//	cout << "main() sill be terminated" << endl;
//	return 0;
//}
//void simple_1() //�Լ� ����
//{
//	cout << "The 1nd simple function responses the call from the main function" << endl << endl;
//	simple_2();
//}
//void simple_2() {
//	cout << "The 2nd simple function responses the call from the 1st function" << endl << endl;
//}

//#include <iostream>
//float c2f(float);
//int main()
//{
//	using namespace std;
//	float tc;
//	cout << "���� �µ��� �Է��Ͻÿ�: ";
//	cin >> tc;
//	float tf = c2f(tc); //tf=1.8*tc+32.0
//	cout << "���� " << tc << " ���� ";
//	cout << " ȭ���� " << tf << " ���̴�." << endl;
//	return 0;
//}
//float c2f(float t) //tc�� t�� �����ȴ�.
//{
//	return 1.8 * t + 32.0;
//}

//Eg.5.3
//#include <iostream>
//void output(int taken);
//using namespace std;
//
//int main()
//{
//	int given = 1;
//	cout << "main function" << endl;
//	cout << "the given value = " << given << endl;
//	cout << "The address of the given value = " << &given << endl;
//	output(given); //call by value, 1�̶�� ���� �Ҵ�Ǿ� �ִ� �����̴�.
//	return 0;
//}
//void output(int taken) //given �� ����Ǿ� �ִ� �� �Ҵ�
//1�� taken�̶�� ���� ���� �����ֱ� �� ���̱� ������ ����Ǿ� �ִ� �ּҰ� �ٸ��� ���´�.
//���⼭ output�Լ� �ȿ� taken�� �� given���� �ᵵ main�Լ� �ȿ� �ִ� given�� �ּҿʹ� �ٸ���
//main�Լ��� �ִ� ������ output�Լ� �ȿ� �ִ� ������ �̸��� ���� ���̴�.
//{
//	cout << endl << endl;
//	cout << "output function" << endl;
//	cout << "the taken value = " << taken << endl;
//	cout << "The address of the taken value = " << &taken << endl;
//}
//�Լ� ȣ�� �� ���ڷ� �Ѱ��� ������ ȣ��� �Լ����� ����� �Ű�������
//�޸��� ���� �ٸ� ������ ���� ����� ������ �����̴�.