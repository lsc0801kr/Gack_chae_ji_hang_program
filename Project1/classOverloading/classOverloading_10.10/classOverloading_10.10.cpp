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
	Geoinfo& operator=(const Geoinfo& temp);
	void Showinfo();
};
Geoinfo::Geoinfo()
{
	length = 1;
	pname = new char[length];
	strcpy_s(pname, length, "");
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
	length = obj.length + 1;
	pname = new char[length];
	strcpy_s(pname, length, obj.pname);
	id = obj.id;
	age = obj.age;
}
Geoinfo& Geoinfo::operator=(const Geoinfo&
	temp) {
	if (this == &temp)
	return *this;//�ΰ��� �����ϸ� ������. (��ü���� ����*)
	delete[] pname; //���� ��ü ������ �ƴϸ� �� �޸� ����
	length = temp.length + 1; 
	pname = new char[length];
	//this->pname=temp.pname�� ����
	strcpy_s(pname, length, temp.pname);
	id = temp.id;
	//this->id=temp.id�� ����
	age = temp.age;
	//this->age=temp.age�� ����
	return *this;
}void Geoinfo::Showinfo()
{
	cout << pname << endl;
	cout << id << endl;
	cout << age << endl;
}
int main()
{
	Geoinfo x("Geo", 10000, 20);
	Geoinfo y("Kyung-Ho", 20000, 20);
	Geoinfo z(x);
	x.Showinfo();
	y.Showinfo();
	z.Showinfo();
	y = y;
	y.Showinfo();
	y = x;
	y.Showinfo();
	return 0;
}