#include <iostream>
#include <cmath> //�� �ڵ����� �����Լ��� ���� �ִ�.

//����ü ����
struct polar
{
	double distance; //�������κ����� �Ÿ�
	double angle; //���������κ����� ����
};
struct rect
{
	double x; //�������κ����� ����Ÿ�
	double y; //�������κ����� �����Ÿ�
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos); //�Լ� ����

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "x���� y���� �Է��Ͻʽÿ�: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�): ";
	}
	cout << "���α׷��� �����մϴ�." << endl;
	return 0;
}
polar rect_to_polar(rect xypos)
//���� ��ǥ�� �� ��ǥ�� ��ȯ
{
	using namespace std;
	polar answer; //����ü �̸�
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer; //polar�� ����ü�� �����Ѵ�
}
void show_polar(polar dapos)
//���� ������ �� ������ ��ȯ�Ͽ� �� ��ǥ�� ���
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "�Ÿ� = " << dapos.distance;
	cout << ", ���� = " << dapos.angle * Rad_to_deg;
	cout << "��" << endl;
}