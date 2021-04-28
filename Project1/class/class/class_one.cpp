//#include <iostream>
//using namespace std;
//
//struct Account {
//	char accID[20];
//	char secID[20];
//	char name[20];
//	int balance;
//
//	void Deposit(int money)
//	{
//		balance += money;
//	}
//	void Withdraw(int money)
//	{
//		balance -= money;
//	}
//};
//
//int main()
//{
//	Account kim = { "1234", "2321", "geo", 1000 };
//	cout << "���¹�ȣ: " << kim.accID << endl;
//	cout << "��й�ȣ: " << kim.secID << endl;
//	cout << "��   ��: " << kim.name << endl;
//	cout << "��   ��: " << kim.balance << endl;
//	cout << endl;
//	kim.Deposit(100);
//	cout << "��   ��: " << kim.balance << endl;
//	cout << endl;
//	kim.Withdraw(200);
//	cout << "��   ��: " << kim.balance << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Account {
//public:
//	char accID[20];
//	char secID[20];
//	char name[20];
//	int balance;
//
//	void Deposit(int money)
//	{
//		balance += money;
//	}
//	void Withdraw(int money)
//	{
//		balance -= money;
//	}
//};
//
//int main()
//{
//	//Account kim = { "1234", "2321", "geo", 1000 };
//	Account kim;
//	strcpy_s(kim.accID, 5, "1234");
//	strcpy_s(kim.secID, 5, "2321");
//	strcpy_s(kim.name, 4, "Geo");
//	kim.balance = 1000;
//	cout << "���¹�ȣ: " << kim.accID << endl;
//	cout << "��й�ȣ: " << kim.secID << endl;
//	cout << "��   ��: " << kim.name << endl;
//	cout << "��   ��: " << kim.balance << endl;
//	cout << endl;
//	kim.Deposit(100);
//	cout << "��   ��: " << kim.balance << endl;
//	cout << endl;
//	kim.Withdraw(200);
//	cout << "��   ��: " << kim.balance << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

class Account //class ����
{
private:
	char accID[20];
	char secID[20];
	char name[20];
	int balance;

public:
	void InitMembers(const char* acc, const char* sec, const char* n, int bal);
	void Deposit(int money);
	void Withdraw(int money);
	void showinfo();
};

void Account::InitMembers(const char* acc, const char* sec, const char* n, int bal) {
	strcpy_s(accID, 20, acc);
	strcpy_s(secID, 20, sec);
	strcpy_s(name, 20, n);
	balance = bal;
}

void Account::Deposit(int money) {
	balance += money;
}
void Account::Withdraw(int money) {
	balance -= money;
}

void Account::showinfo() {
	cout << "���¹�ȣ: " << accID << endl;
	cout << "��й�ȣ: " << secID << endl;
	cout << "��   ��: " << name << endl;
	cout << "��   ��: " << balance << endl;
}

int main()
{
	Account kim; //��ü ����
	kim.InitMembers("12234", "2341", "geo", 1000);
	//kim��ü�� �ʱ�ȭ�ϱ� ���� �Լ�
	kim.showinfo();
	return 0;
}