#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "������ ȣ��" << endl;
	}
	~AAA()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	AAA aaa1;
	AAA aaa2;

	return 0;
}