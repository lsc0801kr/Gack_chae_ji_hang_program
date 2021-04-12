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
//void simple_1(); //함수 원형
//void simple_2(); //함수 원형 void:아무 값도 반환하지 않는다는 뜻
//int main()
//{
//	cout << "main() sill call the 1st simple() function:" << endl << endl;
//	simple_1(); //함수 호출
//	cout << "main() sill be terminated" << endl;
//	return 0;
//}
//void simple_1() //함수 정의
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
//	cout << "섭씨 온도를 입력하시오: ";
//	cin >> tc;
//	float tf = c2f(tc); //tf=1.8*tc+32.0
//	cout << "섭씨 " << tc << " 도는 ";
//	cout << " 화씨로 " << tf << " 도이다." << endl;
//	return 0;
//}
//float c2f(float t) //tc와 t가 대응된다.
//{
//	return 1.8 * t + 32.0;
//}

//Eg.5.3
#include <iostream>
void output(int taken);
using namespace std;

int main()
{
	int given = 1;
	cout << "main function" << endl;
	cout << "the given value = " << given << endl;
	cout << "The address of the given value = " << &given << endl;
	output(given); //call by value, 1이라는 값이 할당되어 있는 상태이다.
	return 0;
}
void output(int taken) //given 에 저장되어 있는 값 할당
//1이 taken이라는 값에 복사 붙혀넣기 한 것이기 때문에 저장되어 있는 주소가 다르게 나온다.
//여기서 output함수 안에 taken을 다 given으로 써도 main함수 안에 있는 given의 주소와는 다르다
//main함수에 있는 변수와 output함수 안에 있는 변수는 이름만 같은 뿐이다.
{
	cout << endl << endl;
	cout << "output function" << endl;
	cout << "the taken value = " << taken << endl;
	cout << "The address of the taken value = " << &taken << endl;
}
//함수 호출 시 인자로 넘겨준 변수와 호출된 함수에서 선언된 매개변수는
//메모리의 서로 다른 공간에 각각 저장된 별개의 변수이다.