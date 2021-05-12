/*#include <iostream>
using namespace std;

class Geoinfo
{
private:
	int id;
	int age;
public:
	Geoinfo(int id, int age);
	void ShowInfo();
};

Geoinfo::Geoinfo(int id, int age)
{
	id = id; //왼쪽과 오른쪽 모두를 매개변수로 인식
	age = age; //따라서 오류가 뜬다.
}

void Geoinfo::ShowInfo()
{
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x(10000, 49);
	x.ShowInfo();
	return 0;
}
//이상한 값이 출력된다.*/

#include <iostream>
using namespace std;

class Geoinfo
{
private:
	int id;
	int age;
public:
	Geoinfo(int id, int age);
	void ShowInfo();
};

Geoinfo::Geoinfo(int id, int age)
{
	this->id = id; //this를 써서 호출한 객체가 가지는 멤버변수를 의미
	this->age = age; //객체 x에 대한 초기화 값을 출력
}

void Geoinfo::ShowInfo()
{
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x(10000, 49);
	x.ShowInfo();
	return 0;
}
