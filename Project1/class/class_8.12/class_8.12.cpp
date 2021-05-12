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
	id = id; //���ʰ� ������ ��θ� �Ű������� �ν�
	age = age; //���� ������ ���.
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
//�̻��� ���� ��µȴ�.*/

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
	this->id = id; //this�� �Ἥ ȣ���� ��ü�� ������ ��������� �ǹ�
	this->age = age; //��ü x�� ���� �ʱ�ȭ ���� ���
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
