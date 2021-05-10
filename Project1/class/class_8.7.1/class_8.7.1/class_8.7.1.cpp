//Lab.8.1
#include <iostream>
using namespace std;

class Time
{
private:
	int hou;
	int min;
	int sec;
public:
	Time(int h = 0, int m = 0, int s = 0);
	void ShowTime();
	void ShowTimeinSec();
};

Time::Time(int h, int m, int s)
{
	hou = h;
	min = m;
	sec = s;
}

void Time::ShowTime()
{
	cout << hou << "시 " << min << "분 " << sec << "초" << endl;
}

void Time::ShowTimeinSec()
{
	int hourInsec = hou * 60 * 60;
	int minInsec = min * 60;
	cout << hourInsec + minInsec + sec << "초" << endl;
}

int main()
{
	Time time1(9);
	Time time2(9,10);
	Time time3(9,10,11);

	time1.ShowTime();
	time2.ShowTime();
	time3.ShowTime();
	time1.ShowTimeinSec();
	time2.ShowTimeinSec();
	time3.ShowTimeinSec();
	return 0;
}

//Eg.8.7.1
//#include <iostream>
//using namespace std;
//class Person
//{
//	char* name;
//	char* phone;
//	int age;
//
//public:
//	Person(const char* _name, const char* _phone, int age);
//	void ShowData();
//	void DellMemory();
//};
//
//Person::Person(const char* _name, const char* _phone, int _age)
//{
//	int len1 = strlen(_name) + 1;
//	name = new char[len1]; //동적배열 선언
//	strcpy_s(name, len1, _name);
//	int len2 = strlen(_phone) + 1;
//	phone = new char[len2];
//	strcpy_s(phone, len2, _phone);
//	age = _age;
//}
//
//void Person::ShowData()
//{
//	cout << "name: " << name << endl;
//	cout << "phone " << phone << endl;
//	cout << "age " << age << endl;
//}
//
//void Person::DellMemory()
//{
//	delete[]name;
//	delete[]phone;
//}
//
//int main()
//{
//	Person p("kim", "010-1234-5678", 20);
//	p.ShowData();
//	p.DellMemory();
//	return 0;
//}