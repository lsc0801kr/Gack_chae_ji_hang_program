#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	char* phone;
	int age;
public:
	Person(const char* _name, const char* _phone, int _age);
	~Person();
	void ShowData();
};

Person::Person(const char* _name, const char* _phone, int _age)
{
	int len1 = strlen(_name) + 1;
	name = new char[len1];
	strcpy_s(name, len1, _name);

	int len2 = strlen(_phone) + 1;
	phone = new char[len2];
	strcpy_s(phone, len2, _phone);
	age = _age;
}

Person::~Person()
{
	delete[]name;
	delete[]phone;
}

void Person::ShowData()
{
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

int main()
{
	Person p("Geo", "010-1234-5678", 20);
	p.ShowData();
	return 0;
}