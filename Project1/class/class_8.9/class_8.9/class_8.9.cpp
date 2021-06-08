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
	~Geoinfo();
	void ShowInfo();
};

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
	cout << "Calling the constructor !" << endl;
}

Geoinfo::~Geoinfo()
{
	cout << "Calling the deconstructor !" << endl;
}

void Geoinfo::ShowInfo()
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x("Geo", 10000, 20);
	Geoinfo y("Kyung-Ho", 20000, 20);
	x.ShowInfo();
	y.ShowInfo();
	return 0;
}