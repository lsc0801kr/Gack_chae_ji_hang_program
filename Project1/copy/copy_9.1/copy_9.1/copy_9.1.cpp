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
	void Showinfo();
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

void Geoinfo::Showinfo()
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x;
	Geoinfo y("geo", 20000, 20);
	Geoinfo z(y); //z.name=y.name
	              //z.id=y.id
	              //z.age=y.age
	x.Showinfo();
	y.Showinfo();
	z.Showinfo();

	return 0;
}