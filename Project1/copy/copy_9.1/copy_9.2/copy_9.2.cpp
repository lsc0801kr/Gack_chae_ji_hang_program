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
	Geoinfo(const char* ch, int a, int b);
	Geoinfo(const Geoinfo& p);
	void Showinfo();
};

Geoinfo::Geoinfo()
{
	strcpy_s(name, 20, "undefined");
	id = 0;
	age = 1;
}

Geoinfo::Geoinfo(const char* ch, int a, int b)
{
	strcpy_s(name, 20, ch);
	id = a;
	age = b;
}

Geoinfo::Geoinfo(const Geoinfo& p) //y��ü�� ��Ī
{
	strcpy_s(name, 20, p.name); //? �� p.name����?
	id = p.id;
	age = p.age;
}

void Geoinfo::Showinfo()
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x; //���ڰ� ����
	Geoinfo y("geo", 20000, 20);
	Geoinfo z(y); //Geoinfo z=y
	//y�� ������ �ִ� ��Ӻ����� ������ ī�ǵǾ����� ���� �����ڶ�� �Ѵ�.
	x.Showinfo();
	y.Showinfo();
	z.Showinfo();

	return 0;
}

//#include <iostream>
//using namespace std;
//class Geoinfo
//{
//public:
//	Geoinfo()
//	{
//		cout << "Geoinfo() ȣ��" << endl;
//	}
//	Geoinfo(int a)
//	{
//		cout << "Geoinfo(int a) ȣ��" << endl;
//	}
//	Geoinfo(const Geoinfo& x)
//	{
//		cout << "Geoinfo(const Geoinfo &x) ȣ��" << endl;
//	}
//};
//
//int main()
//{
//	Geoinfo x1;
//	Geoinfo x2(10);
//	Geoinfo x3(x2);
//	return 0;
//}