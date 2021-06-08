#include <iostream>
using namespace std;
const int SIZE = 20;

class Geoinfo
{
	char name[SIZE];
	int id;
	int age;
public:
	void ShowInfo();
};

void Geoinfo::ShowInfo()
{
	cout << "name: " << name << endl;
	cout << "id: " << id << endl;
	cout << "age: " << age << endl;
}

int main()
{
	Geoinfo p = { "Kim", 200227, 20 };
	p.ShowInfo();
	return 0;
}