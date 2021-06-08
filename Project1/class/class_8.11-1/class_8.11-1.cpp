#include <iostream>
using namespace std;

class Geoinfo
{
private:
	char name[20];
	int id;
	int age;
public:
	Geoinfo(const char* ch, int a, int b);
	void ShowInfo();
};

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
}

void Geoinfo::ShowInfo()
{
	cout << this->age << endl;
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x("Geo", 10000, 20);
	Geoinfo y("Kyung-Ho", 20000, 20);
	x.ShowInfo();
	cout << endl << endl;
	y.ShowInfo();

	Geoinfo* ptr;
	ptr = &x;
	ptr->ShowInfo(); //x의 멤버 함수에 접근
	cout << endl << endl;
	ptr = &y;
	ptr->ShowInfo();
	cout << endl << endl;
	cout << "sizeof(ptr) is " << sizeof(ptr) << endl;
	return 0;
}