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
	void ShowInfo();
};

Geoinfo::Geoinfo()
{
	strcpy_s(name, 20, "Geo");
	id = 10000;
	age = 20;
}

void Geoinfo::ShowInfo()
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x; //객체 선언 시 생성자가 자동으로 호출됨
	x.ShowInfo();
	return 0;
}