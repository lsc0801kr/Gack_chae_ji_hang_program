//#include <iostream>
//using namespace std;
//
//class Geoinfo
//{
//private:
//	char name[20];
//	int id;
//	int age;
//public:
//	Geoinfo();
//	Geoinfo(const char* ch, int a, int b);
//	Geoinfo(const Geoinfo& p);
//	void Showinfo();
//};
//
//Geoinfo::Geoinfo()
//{
//	strcpy_s(name, 20, "undefined");
//	id = 0;
//	age = 1;
//}
//
//Geoinfo::Geoinfo(const char* ch, int a, int b)
//{
//	strcpy_s(name, 20, ch);
//	id = a;
//	age = b;
//}
//
//Geoinfo::Geoinfo(const Geoinfo& p) //y객체의 별칭
//{
//	strcpy_s(name, 20, p.name); //? 왜 p.name이지?
//	id = p.id;
//	age = p.age;
//}
//
//void Geoinfo::Showinfo()
//{
//	cout << name << endl;
//	cout << id << endl;
//	cout << age << endl;
//}
//
//int main()
//{
//	Geoinfo x; //인자가 없음
//	Geoinfo y("geo", 20000, 20);
//	Geoinfo z(y); //Geoinfo z=y
//	//y가 가지고 있는 멤머변수의 내용이 카피되어져서 복사 생성자라고 한다.
//	x.Showinfo();
//	y.Showinfo();
//	z.Showinfo();
//
//	return 0;
//}

#include <iostream>
using namespace std;
class Geoinfo
{
public:
	Geoinfo()
	{
		cout << "Geoinfo() 호출" << endl;
	}
	Geoinfo(int a)
	{
		cout << "Geoinfo(int a) 호출" << endl;
	}
	Geoinfo(const Geoinfo& x)
	{
		cout << "Geoinfo(const Geoinfo &x) 호출" << endl;
	}
};

int main()
{
	Geoinfo x1;
	Geoinfo x2(10);
	Geoinfo x3(x2);
	return 0;
}