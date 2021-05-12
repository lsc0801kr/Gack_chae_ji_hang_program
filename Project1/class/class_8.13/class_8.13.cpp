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

void Geoinfo::ShowInfo() const //�ȿ� �ִ� ������ �ٲ��� �ʰڴٴ� ��
{
	cout << name << endl;
	cout << id << endl;
	cout << age << endl;
}

int main()
{
	Geoinfo x[2] = { //2�� ��ü ���� ����
		Geoinfo("Gewo", 10000, 20), //������ ���
		Geoinfo("Kyung-Ho", 20000, 20)
	};
	for (int i = 0; i < 2; i++) //���������� ��ü�� ����
	{
		x[i].ShowInfo();
	}
	return 0;
}