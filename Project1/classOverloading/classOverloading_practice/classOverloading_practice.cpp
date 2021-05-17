#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents){
		m_cents = cents;
	}
	int getCents() const {
		return m_cents;
	}
	int& getCents() {
		return m_cents;
	}
};

Cents operator+(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);
	//cout << add(cents1, cents2).getCents() << endl;
	cout << (cents1 + cents2).getCents() << endl;

	return 0;
}