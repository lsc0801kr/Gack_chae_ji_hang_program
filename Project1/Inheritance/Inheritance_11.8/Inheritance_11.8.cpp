#include <iostream>
using namespace std;
class Shape
{
protected:
	double area;
public:
	virtual double GetArea() = 0;
	//���� �����Լ�, �Ļ�class�� �Լ� ������ �̸��� �����ϰ� �ִ�.
};
class Squ : public Shape {
protected:
	int length;
public:
	Squ(int l = 0);
	double GetArea();
};
Squ::Squ(int l)
{
	length = l;
}
double Squ::GetArea()
{
	area = length * length;
	return area;
}
class Circle :public Shape {
protected:
	int radius;
public:
	Circle(int r = 0);
	double GetArea();
};
Circle::Circle(int r)
{
	radius = r;
}
double Circle::GetArea()
{
	area = radius * radius * 3.14;
	return area;
}
int main()
{
	Squ recObj(3);
	cout << "Area of rectangle : " << recObj.GetArea() << endl;
	Circle cirObj(3);
	cout << "Area of circle : " << cirObj.GetArea() << endl;
	return 0;
}