//#include <iostream>
//using namespace std;
//int main()
//{
//	char a;
//	cout << "���� ���ĺ� ���� �ϳ��� �Է��Ͻÿ�" << endl;
//	cin >> a;
//	cout << "input : " << a << endl;
//	cout << "output : " << char(a - 32) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	double newnum;
//	cout << "2���� ������ �Է��Ͻÿ�." << endl;
//	cin >> a >> b;
//	newnum = double(b - a) / double(b + a);
//	cout << newnum << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int total = 0;
//	for (int i = 91; i <= 100; i++)
//	{
//		total = total + i;
//	}
//	cout << total / 10 << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int total = 0;
//	int i=91;
//	while (i<=100)
//	{
//		total = total + i;
//		i++;
//	}
//	cout << total / 10 << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

//int main()
//{
//	double a[2][2];
//	cout << "1��° ���� 1��° ���� ���Ұ��� �Է��Ͻÿ�" << endl;
//	cin >> a[0][0];
//	cout << "1��° ���� 2��° ���� ���Ұ��� �Է��Ͻÿ�" << endl;
//	cin >> a[0][1];
//	cout << "2��° ���� 1��° ���� ���Ұ��� �Է��Ͻÿ�" << endl;
//	cin >> a[1][0];
//	cout << "2��° ���� 2��° ���� ���Ұ��� �Է��Ͻÿ�" << endl;
//	cin >> a[1][1];
//	cout << "input 2 by 2 matrix" << endl;
//	for (int i = 0; i <= 1; i++) {
//		for (int j = 0; j <= 1; j++)
//		{
//			cout << a[i][j] << "   ";
//		}
//		cout << endl;
//	}
//
//	cout << "output 2 by 2 inverse matrix" << endl;
//	double cal = 1 / (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
//	double b[2][2];
//	b[0][0] = cal * a[1][1];
//	b[1][1] = cal * a[0][0];
//	b[0][1] = cal * -a[1][0];
//	b[1][0] = cal * -a[0][1];
//	for (int i = 0; i <= 1; i++) {
//		for (int j = 0; j <= 1; j++)
//		{
//			cout << b[i][j] << "   ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <time.h>
//using namespace std;
//
//int main()
//{
//	for (int i = 0; i <= 2; i++)
//	{
//		srand(time(NULL));
//		int randTemp;
//		int num;
//		randTemp = rand() % (3) + 1;
//		cout << "=============================" << endl;
//		cout << "������ 1. ������ 2. ���� 3" << endl;
//		cin >> num;
//		if (num == 1)
//		{
//			cout << "����� ������ �����߽��ϴ�." << endl;
//		}
//		else if (num == 2)
//		{
//			cout << "����� ������ �����߽��ϴ�." << endl;
//		}
//		else
//		{
//			cout << "����� ���� �����߽��ϴ�." << endl;
//		}
//		if (randTemp == 1)
//		{
//			cout << "��ǻ�ʹ� ������ �����߽��ϴ�. " << endl;
//		}
//		else if (randTemp == 2)
//		{
//			cout << "��ǻ�ʹ� ������ �����߽��ϴ�." << endl;
//		}
//		else
//		{
//			cout << "��ǻ�ʹ� ���� �����߽��ϴ�." << endl;
//		}
//		if ((num == randTemp + 1) || (num == 1 && randTemp == 3))
//		{
//			cout << "����� �̰���ϴ�." << endl;
//		}
//		else if (num == randTemp)
//		{
//			cout << "�����ϴ�." << endl;
//		}
//		else
//		{
//			cout << "����� �����ϴ�." << endl;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int Squ(int x1)
//{
//	double wide = x1 * x1;
//	return wide;
//}
//
//double Cir(int x2)
//{
//	double Cwide = (double)(x2 * x2 * 3.141592);
//	return Cwide;
//}
//
//int main()
//{
//	double x1, x2;
//	cout << "���簢�� �� ���� ���̸� �Է��Ͻÿ�" << endl;
//	cin >> x1;
//	cout << "���簢���� ���̴� " << Squ(x1) << endl;
//	cout << "���� �������� �Է��Ͻÿ�" << endl;
//	cin >> x2;
//	cout << "���� ���̴� " << Cir(x2);
//	return 0;


//#include <iostream>
//
//int change1(int &na, int &nb, int &nc);
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cout << "Enter three numbers: " << endl;
//	cin >> a >> b >> c;
//	cout << "ȣ�� �� a= " << a << " b= " << b << " c= " << c << endl;
//	change1(a, b, c);
//	cout << "ȣ�� �� a= " << a << " b= " << b << " c= " << c << endl;
//	return 0;
//}
//int change1(int &na, int &nb, int &nc)
//{
//	int k;
//	k = nc;
//	nc = na;
//	na = nb;
//	nb = k;
//	return na, nb, nc;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cout << "Enter two number : ";
//	cin >> a >> b;
//	if (a > b)
//	{
//		cout << a << " is greater than " << b;
//	}
//	else
//		cout << b << " is greater than " << a;
//
//	cout << endl;
//	if ((a % 2) == 0) {
//		cout << a << " : EVEN" << endl;
//	}
//	else {
//		cout << a << " : ODD" << endl;
//	}
//
//	if ((b % 2) == 0) {
//		cout << b << " : EVEN" << endl;
//	}
//	else {
//		cout << b << " : ODD" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cout << "Enter the base: ";
//	cin >> a;
//	int num = 1;
//	cout << "Enter the exponent: ";
//	cin >> b;
//	for (int i = 1; i <= b; i++)
//	{
//		num = num * a;
//	}
//	cout << a << " ^ " << b << " = " << num << endl;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int largenum=0;
//	cout << "Print the largest number during a series of input (quit: negative number)" << endl;
//	while (1) {
//		cout << "Input any positive number: ";
//		cin >> a;
//		if (largenum < a){
//			largenum = a;
//		}
//		else
//			largenum = largenum;
//		if(a>=0)
//		cout << "The largest number is " << largenum << endl << endl;
//		else
//			break;
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	long z, x, q;
//	cout << "Enter any integer number: ";
//	cin >> z;
//	int sum = 0;
//	int total = 1;
//	int hello = 0;
//	int ohmygod = 0;
//	int ini;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int f = 0;
//	int g = 0;
//	int h = 0;
//	int i = 0;
//	int j = 0;
//	//����
//	for (x = 1; x <= z; x = (x * 10)) {
//		sum = sum + 1;
//	}
//	//�� �ڸ� �� ���� �� �� �ֵ��� for���� �ۼ��Ͽ���.
//	for (q = 2; q <= sum; q++)
//	{
//		total = total * 10;
//	}
//	// sum�ڸ� ���� 10�� ����� total�� �������.
//	for (int y = total; y > 0; y = y / 10) {
//		//total ���� ���� �ؼ� 1/10��ŭ Ŀ���� �ݺ����� �����Ͽ���.
//		ohmygod = hello * 10;
//		hello = z / y; //�ش� ��/�ڸ��� -> 23123/10000 = 2�� �������� �Ͽ���.
//		ini = ohmygod - hello; //
//		if (-ini == 0)
//			a += 1;
//		else if (-ini == 1)
//			b += 1;
//		else if (-ini == 2)
//			c += 1;
//		else if (-ini == 3)
//			d += 1;
//		else if (-ini == 4)
//			e += 1;
//		else if (-ini == 5)
//			f += 1;
//		else if (-ini == 6)
//			g += 1;
//		else if (-ini == 7)
//			h += 1;
//		else if (-ini == 8)
//			i += 1;
//		else
//			j += 1;
//		if (y == 1) { // 1���ڸ� �� ���� �� ���� ���� ����� �ǵ��� �Ͽ���.
//			cout << "0 : " << a << "times" << endl;
//			cout << "1 : " << b << "times" << endl;
//			cout << "2 : " << c << "times" << endl;
//			cout << "3 : " << d << "times" << endl;
//			cout << "4 : " << e << "times" << endl;
//			cout << "5 : " << f << "times" << endl;
//			cout << "6 : " << g << "times" << endl;
//			cout << "7 : " << h << "times" << endl;
//			cout << "8 : " << i << "times" << endl;
//			cout << "9 : " << j << "times" << endl;
//		}
//	}
//
//	return 0;
//}


//#include <iostream>
//#include <time.h>
//#include <cstdlib>
//using namespace std;
//void genRanNumber(float *ranNum)
//{
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		ranNum[i] = float(rand() % (10) + 1);
//	}
//}
//
//float calMean(float* ranNum)
//{
//	float total = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		total = total + ranNum[j];
//	}
//	float average = total / 10;
//	return average;
//}
//
//float calStd(float* ranNum, float avg)
//{
//	float num = 0;
//	for (int z = 0; z < 10; z++)
//	{
//		num = num + (ranNum[z] - avg) * (ranNum[z] - avg);
//	}
//	float standard = sqrt(num / 10);
//	return standard;
//}
//
//int main()
//{
//	float ranNum[10] = { 0.0 };
//	float avg;
//	float std;
//
//	genRanNumber(ranNum);
//	cout << " Random numbers are as follows: " << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << " " << ranNum[i] << endl;
//		//ranNum�迭�� �� ����
//	}
//	cout << endl;
//
//	avg = calMean(ranNum);
//	cout << " Average: " << avg << endl;
//	std = calStd(ranNum, avg);
//	cout << " Standard deviation: " << std << endl;
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//class Random
//{
//private:
//	int ranNum[10];
//public:
//	//Default constructor with no arguments
//	Random();
//	//Constructor with arguments
//	Random(int fromNum, int toNum);
//	//show all numbers in ranNum[10]
//	void ShowNumbers();
//	//show minimum number in ranNum[10]
//	void ShowMinNumber();
//	//show maximum number in ranNum[10]
//	void ShowMaxNumber();
//	//show most frequent numbers in ranNum[10]
//	void FindMostFreqNumber();
//};
//Random::Random() {
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++) {
//		ranNum[i] = rand() % 10 + 1; // �������ڰ� ���� ������. 1~10������ ���� 10�� ����
//	}
//}
//Random::Random(int fromNum, int toNum) {
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++) {
//		ranNum[i] = rand() % (toNum + 1 - fromNum) + fromNum; // �������ڰ� �ִ� ������.
//		//fromNum~toNum������ ���� 10�� ����
//	}
//}
//void Random::ShowNumbers() {
//	cout << "Random numbers are as follows: ";
//	for (int i = 0; i < 10; i++) {
//		cout << " " << ranNum[i]; // ���� �迭 ���
//	}
//	cout << endl;
//}
//void Random::ShowMinNumber() { // ���� �迭�� �ּڰ� ���ϱ�
//	int min = ranNum[0]; // �ּڰ��� �迭�� ù��° ������ ������ ����
//	for (int i = 0; i < 10; i++) {
//		if (min > ranNum[i]) // �迭 ���ҵ鰣�� �� ��
//			min = ranNum[i]; // �ּڰ� ����
//	}
//	cout << "Minimum number : " << min << endl;
//}
//void Random::ShowMaxNumber() { // ���� �迭�� �ִ� ���ϱ�
//	int max = ranNum[0]; // �ִ��� �迭�� ù��° ������ ������ ����
//	for (int i = 0; i < 10; i++) {
//		if (max < ranNum[i]) // �迭 ���ҵ鰣�� �� ��
//			max = ranNum[i]; // �ִ� ����
//	}
//	cout << "Maximum number : " << max << endl;
//}
//void Random::FindMostFreqNumber() { // ���� ���� ���� ���� ���ϱ�
//	int max_count = 0;
//	cout << " Most occurred number: ";
//	for (int i = 0; i < 10; i++)
//	{
//		int count = 1;
//		for (int j = i + 1; j < 10; j++)
//			if (ranNum[i] == ranNum[j])
//				count++;
//		if (count > max_count)
//			max_count = count;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		int count = 1;
//		for (int j = i + 1; j < 10; j++)
//			if (ranNum[i] == ranNum[j])
//				count++;
//		if (count == max_count)
//			cout << ranNum[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	//create random object which random inregers from 1 to 10
//	Random a;
//	a.ShowNumbers();
//	a.ShowMinNumber();
//	a.ShowMaxNumber();
//	a.FindMostFreqNumber();
//	cout << endl;
//	//create random object which random integers from 40 to 45
//	Random b(40, 45);
//	b.ShowNumbers();
//	b.ShowMinNumber();
//	b.ShowMaxNumber();
//	b.FindMostFreqNumber();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int total = 0;
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> a[i];
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		total = total + a[j];
//	}
//	cout << total << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int total = 0;
//	int a[2][3];
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> a[i][j];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			total = total + a[i][j];
//		}
//		cout << endl;
//	}
//	cout << total << endl;
//	return 0;
//}

//class Rectangle {
//private:
//	double x;
//	double y;
//	double wide = 0;
//	double length = 0;
//public:
//	Rectangle(int i, int j);
//	double GetArea();
//	double GetGirth();
//};
//
//Rectangle::Rectangle(int i, int j)
//{
//	x = i;
//	y = j;
//}
//
//double Rectangle::GetArea()
//{
//	wide = x * y;
//	return wide;
//}
//
//double Rectangle::GetGirth()
//{
//	length = 2 * x + 2 * y;
//	return length;
//}
//
//class Circle
//{
//private:
//	double a;
//	double wide = 0;
//	double length = 0;
//public:
//	Circle(int i);
//	double GetArea();
//	double GetGirth();
//};
//
//Circle::Circle(int i)
//{
//	a = i;
//}
//
//double Circle::GetArea()
//{
//	wide = a * a * 3.141592;
//	return wide;
//}
//
//double Circle::GetGirth()
//{
//	length = a * 2 * 3.141592;
//	return length;
//}
//
//int main()
//{
//	Rectangle rec(3, 4);
//	cout << "Area: " << rec.GetArea() << endl;
//	cout << "Girth: " << rec.GetGirth() << endl;
//	Circle cir(5);
//	cout << "Area: " << cir.GetArea() << endl;
//	cout << "Girth: " << cir.GetGirth() << endl;
//	return 0;
//}
//============================================================================================================================================================================================
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	float f1 = a / b; //0
//	float f2 = float(a / b); //0
//	float f3 = (float)a / b; //0.5
//	float f4 = float(a) / b; //0.5
//	float f5 = a / float(b); //0.5
//	cout << "f1 = " << f1 << endl;
//	cout << "f2 = " << f2 << endl;
//	cout << "f3 = " << f3 << endl;
//	cout << "f4 = " << f4 << endl;
//	cout << "f5 = " << f5 << endl;
//	return 0;
//}

//Lab.3.1, 3.2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int total = 0;
//	for (int i = 1; i <= 100; i=i+2)
//	{
//		total = total + i;
//	}
//	cout << "total = " << total << endl;
//	return 0;
//}

//Lab.3.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout << "���ϴ� ���� �Է��Ͻÿ�. ";
//	cin >> a;
//	for (int i = 1; i <= 9; i++)
//	{
//		cout << a << " * " << i << " = " << a * i << endl;
//	}
//	return 0;
//}

//3.5
//#include <iostream>
//using namespace std;
//int main()
//{
//	int total;
//	cin >> total;
//	for (int i = 1; i <= 7; i++)
//	{
//		cout << total << endl;
//		total = total * 2;
//	}
//	return 0;
//}


//Lab3.5
//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 100; i >= 0; i=i-5)
//	{
//		cout << "���� " << i << "�� :  ȭ�� " << 1.8 * i + 32 << "��" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 2; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			cout << i << " * " << j << " = " << i * j << endl;
//		}
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 1;
//	int total = 0;
//	while (a <= 99)
//	{
//		total = total + a;
//		a = a + 2;
//	}
//	cout << total << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int max;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	cout << max << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[3][3] = { {1,1,1},{2,2,2},{3,3,3} };
//	int b[3][3] = { {1,2,3},{1,2,3},{1,2,3} };
//	int total = 0;
//	int c[3][3];
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int z = 0; z <= 2; z++)
//		{
//			for (int j = 0; j <= 2; j++)
//			{
//				total = total + a[i][j] * b[j][i];
//			}
//			c[i][z] = total;
//		}
//	}
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 2; j++)
//		{
//			cout << c[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <time.h>
//#include <ctime>
//using namespace std;
//int main()
//{
//	for (int i = 0; i <= 10; i++) {
//		srand(time(NULL));
//		int randTemp;
//		randTemp = rand() % (10) + 1;
//		cout << randTemp << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void swap(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 1, b = 2;
//	cout << "before call: a = " << a << "   b = " << b << endl;
//	swap(&a, &b);
//	cout << "after call: a = " << a << "   b = " << b << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void swap(int &a, int&b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 1, b = 2;
//	cout << "before call: a = " << a << "   b = " << b << endl;
//	swap(a, b);
//	cout << "after call: a = " << a << "   b = " << b << endl;
//	return 0;
//}

//lab5.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[6];
//	int total = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		cin >> a[i];
//		total = total + a[i];
//	}
//	cout << total << endl;
//	return 0;
//}

//lab5.4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[3][4];
//	int total = 0;
//	for (int i = 1; i <= 2; i++)
//	{
//		for (int j = 1; j <= 3; j++)
//		{
//			cin >> a[i][j];
//			total = total + a[i][j];
//		}
//	}
//	cout << total << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int function(int a[], int size)
//{
//	int sum = 0;
//	for (int j = 0; j < size; j++)
//	{
//		sum += a[j];
//	}
//	return sum;
//}
//int main()
//{
//	int a[5];
//	for (int i = 0; i < size(a); i++)
//	{
//		cin >> a[i];
//	}
//	cout << "total number is : " << function(a, 5) << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int add(int(*output)[3], int size)
//{
//	int sum = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			sum += output[i][j];
//	}
//	return sum;
//}
//int main()
//{
//	int arr[2][3];
//	int size = sizeof(arr) / sizeof(int);
//	cout << "sizeof(arr)" << sizeof(arr) << endl;
//	cout << "sizeof(int)" << sizeof(int) << endl;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> arr[i][j];
//		}
//		cout << endl;
//	}
//	int total = 0;
//	total = add(arr, size);
//	cout << total << endl;
//	return 0;
//}
//===========================================================================================

//#include <iostream>
//using namespace std;
//class Time {
//private:
//	int hour;
//	int minute;
//	int second;
//public:
//	Time(int h = 0, int m = 0, int s = 0);
//	void ShowTime();
//	void ShowTimeinSec();
//};
//Time::Time(int h, int m, int s)
//{
//	hour = h;
//	minute = m;
//	second = s;
//}
//void Time::ShowTime()
//{
//	cout << hour << "�� " << minute << "�� " << second << "��" << endl;
//}
//void Time::ShowTimeinSec()
//{
//	int realhour = hour * 3600;
//	int realminute = minute * 60;
//	cout << realhour + realminute + second << "��" << endl;
//}
//int main()
//{
//	Time time1(9);
//	Time time2(9, 10);
//	Time time3(9, 10, 11);
//
//	time2.ShowTime();
//	time2.ShowTimeinSec();
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Rectangle
//{
//private:
//	int a, b;
//	double length = 0;
//	double wide = 0;
//public:
//	Rectangle(int i = 0, int j = 0);
//	double GetArea();
//	double GetGirth();
//};
//
//Rectangle::Rectangle(int i, int j)
//{
//	a = i;
//	b = j;
//}
//
//double Rectangle::GetArea()
//{
//	length = 2 * (a + b);
//	return length;
//}
//
//double Rectangle::GetGirth()
//{
//	wide = a * b;
//	return wide;
//}
//
//class Circle
//{
//private:
//	int a;
//	double area = 0;
//	double girth = 0;
//public:
//	Circle(int i = 0);
//	double GetArea();
//	double GetGirth();
//};
//
//Circle::Circle(int i)
//{
//	a = i;
//}
//
//double Circle::GetArea()
//{
//	area = a * a * 3.141592;
//	return area;
//}
//
//double Circle::GetGirth()
//{
//	girth = a * 2 * 3.141592;
//	return girth;
//}
//
//int main()
//{
//	Rectangle rec(3, 4);
//	cout << "Area: " << rec.GetArea() << endl;
//	cout << "Girth: " << rec.GetGirth() << endl;
//
//	Circle cir(5);
//	cout << "Area: " << cir.GetArea() << endl;
//	cout << "Girth: " << cir.GetGirth() << endl;
//	return 0;
//}

//#include <iostream>
//int main()
//{
//	using namespace std;
//	int num, numOrigin;
//	int count = 0;
//	cout << "Enter any integer number: ";
//	cin >> num;
//	while (num < 100) {
//		//3�ڸ� �̻� ���� ���ǽ� ����
//		cout << "Enter any integer number: ";
//		cin >> num;
//	}
//	numOrigin = num; //num�� ����
//	for (int i = 0; i <= 9; i++) {
//		//�� ���� �ݺ��� ����
//		while (num != 0) {
//			//�� �ڸ��� ���� ���ϱ�
//			if (num % 10 == i) {
//				count = count + 1;
//			}
//			num = num / 10;
//		}
//		cout << i << " : " << count << " times" << endl;
//		count = 0;
//		//�� ���� �ݺ� Ƚ�� �� �ʱ�ȭ
//		num = numOrigin;
//		//num�� �ʱ�ȭ
//	}
//	return 0;
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class Random
//{
//private:
//	int ranNum[10];
//public:
//	Random();
//	Random(int fromNum, int toNum);
//	void ShowNumbers();
//	void ShowMinNumber();
//	void ShowMaxNumber();
//	void FindMostFreqNumber();
//};
//
//Random::Random()
//{
//	srand(time(NULL));
//	for (int z = 0; z < 10; z++)
//	{
//		ranNum[z] = (rand() % 10 + 1);
//	}
//}
//
//Random::Random(int fromNum, int toNum)
//{
//	//srand(time(NULL));
//	for (int z = 0; z < 10; z++)
//	{
//		ranNum[z] = (rand() % (toNum + 1 - fromNum) + fromNum); //40���� 45������ ����
//	}
//}
//
//void Random::ShowNumbers()
//{
//	cout << "Random numbers are as follows: ";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << " " << ranNum[i];
//	}
//	cout << endl;
//}
//
//void Random::ShowMinNumber()
//{
//	cout << "Minimum number : ";
//	int num = ranNum[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (ranNum[i] <= num)
//		{
//			num = ranNum[i];
//		}
//	}
//	cout << num << endl;
//}
//
//void Random::ShowMaxNumber()
//{
//	cout << "Maximum number : ";
//	int num = ranNum[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (ranNum[i] >= num)
//		{
//			num = ranNum[i];
//		}
//	}
//	cout << num << endl;
//}
//
//void Random::FindMostFreqNumber()
//{
//	int max_count = 0;
//	cout << " Most occurred number: ";
//	for (int i = 0; i < 10; i++)
//	{
//		int count = 1;
//		for (int j = i + 1; j < 10; j++)
//			if (ranNum[i] == ranNum[j])
//				count++;
//		if (count > max_count)
//			max_count = count;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		int count = 1;
//		for (int j = i + 1; j < 10; j++)
//			if (ranNum[i] == ranNum[j])
//				count++;
//		if (count == max_count)
//			cout << ranNum[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Random a;
//	a.ShowNumbers();
//	a.ShowMinNumber();
//	a.ShowMaxNumber();
//	a.FindMostFreqNumber();
//
//	Random b(40, 45);
//	b.ShowNumbers();
//	b.ShowMinNumber();
//	b.ShowMaxNumber();
//	b.FindMostFreqNumber();
//
//	return 0;
//}
























//========================================================
//#include <iostream>
//using namespace std;
//
//int prnMaxNum(int *a, int b)
//{
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	cout << "The maximum number is ";
//	cout << max << endl;
//	return max;
//}
//
//int countOddNumber(int *i, int j)
//{
//	int count = 0;
//	for (int z = 0; z < 10; z++)
//	{
//		if (i[z] % 2 == 0)
//			count = count + 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(num) / sizeof(int);
//	prnMaxNum(num, size);
//	int oddNum = countOddNumber(num, size);
//	cout << "Number of odd number is " << oddNum << endl;
//	return 0;
//}
//=====================================


//#include <iostream>
//using namespace std;
//
//class record
//{
//protected:
//	double a, b, c;
//	double sum = 0;
//	double avg = 0;
//public:
//	record(double i = 0, double j = 0, double z = 0);
//	double Sum();
//	double Avg();
//};
//
//record::record(double i, double j, double z)
//{
//	a = i;
//	b = j;
//	c = z;
//}
//
//double record::Sum()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		sum = a + b + c;
//	}
//	return sum;
//}
//
//double record::Avg()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		sum = a + b + c;
//	}
//	avg = sum / 3;
//	return avg;
//}
//
//int main()
//{
//	record student[2] = {
//		{65.0, 70.0, 55.0 }, { 75.0, 85.0, 79.0 },
//	};
//
//	cout << " 1. " << " total: " << student[0].Sum() << ", avg: " << student[0].Avg() << endl;
//	cout << " 2. " << " total: " << student[1].Sum() << ", avg: " << student[1].Avg() << endl;
//	return 0;
//}
//============================================================
//#include <iostream>
//using namespace std;
//
//class Square {
//	int w, h;
//public:
//	Square() { w = h = 1; }
//	Square(int w, int h) { this->w = w; this->h = h; }
//	int getArea() { return w * h; };
//};
//
//class Cube:public Square
//{
//protected:
//	int a;
//	int wide = 0;
//public:
//	Cube() { a = 1; }
//	Cube(int w, int h, int a) :Square(w, h) { this->a = a; }
//	int getVolume() { wide = getArea() * a; return wide; }
//};
//
//int main()
//{
//	Cube box(5, 5, 5);
//	cout << box.getVolume() << endl;


