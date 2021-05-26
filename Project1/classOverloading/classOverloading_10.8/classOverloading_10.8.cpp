//10.6, 10.8을 연계해서 공부할 것
#include <iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);

	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);

	Time operator+(const Time& t); //멤버함수로 오버로딩 하는 방법
	Time operator-(const Time& t);
	Time operator*(double n);

	//프랜드 형식으로 오버로딩 하는 방법
	friend Time operator*(double m, Time& t) { return t * m; }
	friend ostream& operator<<(ostream& os, const Time& t);
};
Time::Time()
{
	hours = minutes = 0;
}
Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}
void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::AddHr(int h)
{
	hours += h;
}
void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}
Time Time::operator+(const Time& t)
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
Time Time::operator-(const Time& t)
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}
Time Time::operator*(double mult)
{
	Time result;
	long totalminutes = hours * mult * 60 + minutes * mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}
ostream& operator<<(ostream& os, const Time& t)
{
	os << t.hours << "시간, " << t.minutes << "분";
	return os;
}
int main()
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida와 Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "Aida * 1.17: " << temp << endl;
	cout << "10 * Tosca: " << 10 * tosca << endl;

	return 0;
}