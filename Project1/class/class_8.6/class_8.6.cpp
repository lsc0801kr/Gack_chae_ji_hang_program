#include <iostream>
using namespace std;

class Geoinfo
{
private:
	char name[20];
	int id;
	int age;
public:
	Geoinfo();
	Geoinfo(const char* ch, int a, int b);
	void ShowInfo();
};

Geoinfo::Geoinfo()
{
	strcpy_s(name, 20, "undefined");
	id = 0;
	age = 1;
}

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
}

void Geoinfo::ShowInfo()
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x("Geo", 100000, 20);
	Geoinfo y("Kyungho", 200000, 20);
	Geoinfo z;
	x.ShowInfo();
	y.ShowInfo();
	z.ShowInfo();
	y = x; //동일한 클래스형 객체끼리
	y.ShowInfo(); //대입 연산자로 값 치환 가능
	z = x;
	z.ShowInfo();
	return 0;
}