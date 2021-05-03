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
	return 0;
}