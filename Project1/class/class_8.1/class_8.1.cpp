//#include <iostream>
//using namespace std;
//const int SIZE = 20;
//
//class Geoinfo
//{
//	char name[SIZE];
//	int id;
//	int age;
//public:
//	void ShowInfo();
//	void SetData(const char* _name, int _id, int _age);
//};
//
//void Geoinfo::ShowInfo()
//{
//	cout << "name: " << name << endl;
//	cout << "id: " << id << endl;
//	cout << "age: " << age << endl;
//}
//
//void Geoinfo::SetData(const char* _name, int _id, int _age)
//{
//	strcpy_s(name, 20, _name);
//	id = _id;
//	age = _age;
//}
//
//int main()
//{
//	Geoinfo p;
//	p.SetData("Kim", 200227, 20);
//	p.ShowInfo();
//	return 0;
//}

///////////////������


#include <iostream>
using namespace std;

class AAA
{
	int i, j;
public:
	AAA() //������ ���ϰ� void��� Ű���尡 ����.
	{
		cout << "������ ȣ��" << endl;
		i = 10;
		j = 20;
	}
	void ShowData()
	{
		cout << i << " " << j << endl;
	}
};

int main()
{
	AAA aaa;
	aaa.ShowData();
	return 0;
}