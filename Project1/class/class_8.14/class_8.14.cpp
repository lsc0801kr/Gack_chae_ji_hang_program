#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int image;
public:
	Complex(int r = 0, int i = 0);
	void ShowComplex()const;
};

Complex::Complex(int r, int i)
{
	real = r;
	image = i;
}

void Complex::ShowComplex() const
{
	cout << "(" << real << " + " << image << "i)" << endl;
}

int main()
{
	Complex arr[4] = { //객체배열 선언
		Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8)
		//생성자 사용
	};
	Complex* ptr = arr; //객체 포인터 사용
	//첫번째 주소가 객체 포인터에 할당됨
	for (int i = 0; i < 4; i++)
	{
		arr[i].ShowComplex();
		(ptr + i)->ShowComplex();
		ptr[i].ShowComplex();
		cout << endl;
	}
	return 0;
}