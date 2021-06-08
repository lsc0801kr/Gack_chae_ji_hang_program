#include <iostream>
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

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	length = strlen(ch) + 1;
	pname = new char[length]; //동적할당부여, 힙 메모리에 저장
	strcpy_s(pname, length, ch);
	id = a;
	age = b;
}

Geoinfo::~Geoinfo()
{
	delete[]pname;
	length = 0;
	pname = NULL;
}

void Geoinfo::ShowInfo()
{
	cout << pname << endl;
	cout << id << endl;
	cout << age << endl;
	cout << endl << endl;
}

int main()
{
	Geoinfo x("Geo Kim", 10000, 20);
	Geoinfo y(x); //x와 동일 주소 지시
	x.ShowInfo();
	y.ShowInfo();

	return 0;
}
//오류가 뜬다.d