#include<iostream>
using namespace std;
class Geoinfo
{
private:
	char* pname;
	int id;
	int age;
	int length;
public:
	Geoinfo();
	Geoinfo(const char* ch, int a, int b);
	~Geoinfo();
	Geoinfo(const Geoinfo& obj);
	void ShowInfo();
};
Geoinfo::Geoinfo()
{
	length = 1;
	pname = new char[length];
	strcpy_s(pname, 20, "");
	id = 0;
	age = 1;
}
Geoinfo::Geoinfo(const char* ch, int a, int b) {
	length = strlen(ch) + 1;
	pname = new char[length];
	strcpy_s(pname, length, ch);
	id = a;
	age = b;
}
Geoinfo::~Geoinfo() {
	delete[] pname;
	length = 0;
	pname = NULL;
}
Geoinfo::Geoinfo(const Geoinfo& obj) {
	length = obj.length;
	pname = new char[length]; //���� �Ҵ� ����
	strcpy_s(pname, length, obj.pname); //pname�̸� ����
	id = obj.id;
	age = obj.age;
}
void Geoinfo::ShowInfo() {
	cout << pname << endl;
	cout << id << endl;
	cout << age << endl;
	cout << endl << endl;
}
int main()
{
	Geoinfo x("Geo", 10000, 20);
	Geoinfo y("KyungHo", 10000, 20);
	Geoinfo z(x);
	x.ShowInfo();
	y.ShowInfo();
	z.ShowInfo();
	return 0;
}