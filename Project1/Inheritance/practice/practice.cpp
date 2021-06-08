//#include <iostream>
//using namespace std;
//int main()
//{
//	char a;
//	cout << "영어 알파벳 문자 하나를 입력하시오" << endl;
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
//	cout << "2개의 정수를 입력하시오." << endl;
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
//	cout << "1번째 행의 1번째 열의 원소값을 입력하시오" << endl;
//	cin >> a[0][0];
//	cout << "1번째 행의 2번째 열의 원소값을 입력하시오" << endl;
//	cin >> a[0][1];
//	cout << "2번째 행의 1번째 열의 원소값을 입력하시오" << endl;
//	cin >> a[1][0];
//	cout << "2번째 행의 2번째 열의 원소값을 입력하시오" << endl;
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
//		cout << "가위는 1. 바위는 2. 보는 3" << endl;
//		cin >> num;
//		if (num == 1)
//		{
//			cout << "당신은 가위를 선택했습니다." << endl;
//		}
//		else if (num == 2)
//		{
//			cout << "당신은 바위를 선택했습니다." << endl;
//		}
//		else
//		{
//			cout << "당신은 보를 선택했습니다." << endl;
//		}
//		if (randTemp == 1)
//		{
//			cout << "컴퓨터는 가위를 선택했습니다. " << endl;
//		}
//		else if (randTemp == 2)
//		{
//			cout << "컴퓨터는 바위를 선택했습니다." << endl;
//		}
//		else
//		{
//			cout << "컴퓨터는 보를 선택했습니다." << endl;
//		}
//		if ((num == randTemp + 1) || (num == 1 && randTemp == 3))
//		{
//			cout << "당신이 이겼습니다." << endl;
//		}
//		else if (num == randTemp)
//		{
//			cout << "비겼습니다." << endl;
//		}
//		else
//		{
//			cout << "당신이 졌습니다." << endl;
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
//	cout << "정사각형 한 변의 길이를 입력하시오" << endl;
//	cin >> x1;
//	cout << "정사각형의 넓이는 " << Squ(x1) << endl;
//	cout << "원의 반지름을 입력하시오" << endl;
//	cin >> x2;
//	cout << "원의 넓이는 " << Cir(x2);
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
//	cout << "호출 전 a= " << a << " b= " << b << " c= " << c << endl;
//	change1(a, b, c);
//	cout << "호출 후 a= " << a << " b= " << b << " c= " << c << endl;
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
//	//선언
//	for (x = 1; x <= z; x = (x * 10)) {
//		sum = sum + 1;
//	}
//	//몇 자리 수 인지 알 수 있도록 for문을 작성하였다.
//	for (q = 2; q <= sum; q++)
//	{
//		total = total * 10;
//	}
//	// sum자릿 수인 10의 배수인 total을 만들었다.
//	for (int y = total; y > 0; y = y / 10) {
//		//total 부터 시작 해서 1/10만큼 커지는 반복문을 선언하였다.
//		ohmygod = hello * 10;
//		hello = z / y; //해당 수/자릿수 -> 23123/10000 = 2가 나오도록 하였다.
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
//		if (y == 1) { // 1의자릿 수 까지 다 계산된 다음 출력이 되도록 하였다.
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
//		//ranNum배열의 값 나열
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
//		ranNum[i] = rand() % 10 + 1; // 전달인자가 없는 생성자. 1~10까지의 난수 10개 생성
//	}
//}
//Random::Random(int fromNum, int toNum) {
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++) {
//		ranNum[i] = rand() % (toNum + 1 - fromNum) + fromNum; // 전달인자가 있는 생성자.
//		//fromNum~toNum까지의 난수 10개 생성
//	}
//}
//void Random::ShowNumbers() {
//	cout << "Random numbers are as follows: ";
//	for (int i = 0; i < 10; i++) {
//		cout << " " << ranNum[i]; // 난수 배열 출력
//	}
//	cout << endl;
//}
//void Random::ShowMinNumber() { // 난수 배열의 최솟값 구하기
//	int min = ranNum[0]; // 최솟값을 배열의 첫번째 원소의 값으로 설정
//	for (int i = 0; i < 10; i++) {
//		if (min > ranNum[i]) // 배열 원소들간의 값 비교
//			min = ranNum[i]; // 최솟값 설정
//	}
//	cout << "Minimum number : " << min << endl;
//}
//void Random::ShowMaxNumber() { // 난수 배열의 최댓값 구하기
//	int max = ranNum[0]; // 최댓값을 배열의 첫번째 원소의 값으로 설정
//	for (int i = 0; i < 10; i++) {
//		if (max < ranNum[i]) // 배열 원소들간의 값 비교
//			max = ranNum[i]; // 최댓값 설정
//	}
//	cout << "Maximum number : " << max << endl;
//}
//void Random::FindMostFreqNumber() { // 가장 많이 나온 숫자 구하기
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
//	cout << "원하는 단을 입력하시오. ";
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
//		cout << "섭씨 " << i << "도 :  화씨 " << 1.8 * i + 32 << "도" << endl;
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

#include <iostream>
using namespace std;
int add(int(*output)[3], int size)
{
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			sum += output[i][j];
	}
	return sum;
}
int main()
{
	int arr[2][3];
	int size = sizeof(arr) / sizeof(int);
	cout << "sizeof(arr)" << sizeof(arr) << endl;
	cout << "sizeof(int)" << sizeof(int) << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
		cout << endl;
	}
	int total = 0;
	total = add(arr, size);
	cout << total << endl;
	return 0;
}
