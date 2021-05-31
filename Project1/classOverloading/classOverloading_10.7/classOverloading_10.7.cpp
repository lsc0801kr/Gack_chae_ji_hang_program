#include <iostream>
using namespace std;

class coord {
private:
	int x, y;
public:
	coord(int i = 0, int j = 0);// { x = i, y = j; }
	friend ostream& operator<<(ostream& os, const coord& ob);
	friend istream& operator>>(istream& is, coord& ob);
};

ostream& operator << (ostream& os, const coord& ob)
//os는 cout 의 참조이다.
{
	os << "(" << ob.x << ", " << ob.y << ")" << endl;
	return os;
}

coord::coord(int i = 0, int j = 0)
{
	x = i;
	y = j;
}

istream& operator>>(istream& is, coord& oy)
//is는 cin 의 참조이다.
{
	cout << "Enter x and y values: ";
	is >> oy.x >> oy.y;
	return is;
}

int main()
{
	coord a;
	cin >> a;
	cout << a;
	return 0;
}