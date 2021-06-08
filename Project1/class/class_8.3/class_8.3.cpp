#include <iostream>
using namespace std;

class Geoinfo
{
private:
	char name[20];
	int id;
	int age;
public:
	Geoinfo(const char*ch, int a, int b);
	void ShowInfo();
};

Geoinfo::Geoinfo(const char*ch, int a, int b)
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
	Geoinfo x("Geo", 11111, 20);
	Geoinfo y("Kyungho", 22222, 20);
	x.ShowInfo();
	y.ShowInfo();
	return 0;
}