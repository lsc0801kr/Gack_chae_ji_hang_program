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
	void ShowInfo() const;
};

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
}

void Geoinfo::ShowInfo() const //안에 있는 변수를 바꾸지 않겠다는 뜻
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x[2] = { //2개 객체 저장 가능
		Geoinfo("Gewo", 10000, 20), //생성자 사용
		Geoinfo("Kyung-Ho", 20000, 20)
	};
	for (int i = 0; i < 2; i++) //순차적으로 객체에 접근
	{
		x[i].ShowInfo();
	}
	return 0;
}