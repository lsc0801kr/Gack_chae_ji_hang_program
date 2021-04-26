//#include <iostream>
//using namespace std;
//
//int summation_1(int output[][3], int elnum);
//int main()
//{
//	int input[2][3];
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			cin >> input[i][j];
//		}
//		cout << endl;
//	}
//
//	cout << "Total summation is " << summation_1(input, 3) << endl;
//	return 0;
//}
//int summation_1(int output[][3], int elnum) {
//	int sum = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			sum+= output[i][j];
//	}
//	return sum;
//}
//
////±³¼ö´Ô Ç®ÀÌ
//#include <iostream>
//using namespace std;
//int function(int output[][3], int elnum)
//{
//	int sum = 0;
//	for (int i = 0; i < elnum; i++) {
//		cout << *(*output + i) << endl;
//		sum += *(*output + i);
//	}
//	return sum;
//}
//int function_2(int (*output)[3], int elnum)
//{
//	int sum = 0;
//	for (int i = 0; i < elnum; i++) {
//		cout << *(*output + i) << endl;
//		sum += *(*output + i);
//	}
//	return sum;
//}
//int main()
//{
//	int input[2][3] = { {1,1,1},{1,1,1} };
//	int size = sizeof(input) / sizeof(int);
//	int total = 0;
//	total = function_2(input, size);
//	cout << total << endl;
//	return 0;
//}
//
#include <iostream>
using namespace std;
int add(int (*output)[3], int size)
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
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
		cout << endl;
	}
	int total = 0;
	total= add(arr, size);
	cout << total << endl;
	return 0;
}
 