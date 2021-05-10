#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "생성자 호출" << endl;
	}
	~AAA()
	{
		cout << "소멸자 호출" << endl;
	}
};

int main()
{
	AAA aaa1;
	AAA aaa2;

	return 0;
}