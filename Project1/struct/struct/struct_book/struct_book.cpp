//8.1
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//void main()
//{
//	struct namecard man;
//	cout << "�̸��� �Է��ϼ��� -> ";
//	cin >> man.name;
//	cout << "������ �Է��ϼ��� -> ";
//	cin >> man.job;
//	cout << "����ó�� �Է��ϼ��� ->";
//	cin >> man.tel;
//	cout << "�̸����� �Է��ϼ��� ->";
//	cin >> man.email;
//
//	cout << "\n �Է¹��� �����͸� ����մϴ�.";
//	cout << "\n �̸� \t ���� \t ����ó \t �̸���";
//	cout << "\n===================================";
//	cout << "\n " << man.name << "\t " << man.job << "\t " << man.tel << "\t " << man.email;
//	cout << "\n===================================";
//	cout << "sizeof(namecard) => " << sizeof(namecard) << endl;
//	cout << "����ü ������ �޸� ������ => " << sizeof(namecard) << endl;
//}

////8.2
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//void main()
//{
//	namecard x = { "������", "�л�", "123" , "asdf" };
//	namecard y = { "�̴���", "����", "333" , "aerw" };
//	namecard z = { "���̳�", "�F��", "112" , "asfr" };
//
//	cout << "�̸�   ����     ����ó     �̸���" << endl;
//	cout << "==============================================" << endl;
//	cout << x.name << "   " << x.job << "   " << x.tel << "   " << x.email << endl;
//	cout << y.name << "   " << y.job << "   " << y.tel << "   " << y.email << endl;
//	cout << z.name << "   " << z.job << "   " << z.tel << "   " << z.email << endl;
//	cout << endl;
//}

////8.3
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//void main()
//{
//	namecard x = { "������", "�л�", "123" , "asdf" };
//	namecard y;
//	y = x;
//
//	cout << "�̸�   ����     ����ó     �̸���" << endl;
//	cout << "==============================================" << endl;
//	cout << x.name << "   " << x.job << "   " << x.tel << "   " << x.email << endl;
//	cout << y.name << "   " << y.job << "   " << y.tel << "   " << y.email << endl;
//	cout << endl;
//}

////8.4
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//
//void structPrn(namecard temp);
//
//void main()
//{
//	namecard x = { "������", "�л�", "123" , "asdf" };
//	namecard y = { "�̴���", "����", "333" , "aerw" };
//	namecard z = { "���̳�", "�F��", "112" , "asfr" };
//
//	cout << "�̸�   ����     ����ó     �̸���" << endl;
//	cout << "==============================================" << endl;
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout << endl << "==============================================" << endl;
//}
//void structPrn(namecard temp)
//{
//	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
//}

////8.5
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//
//void structPrn(namecard temp);
//namecard structInput();
//
//void main()
//{
//	namecard x, y, z;
//	x = structInput();
//	y = structInput();
//	z = structInput();
//
//	cout << "�̸�   ����     ����ó     �̸���" << endl;
//	cout << "==============================================" << endl;
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout << endl << "=============================================" << endl;
//}
//void structPrn(namecard temp)
//{
//	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
//}
//namecard structInput()
//{
//	namecard temp;
//	cout << endl;
//	cout << "�̸��� �Է��ϼ��� => ";
//	cin >> temp.name;
//	cout << "������ �Է��ϼ��� => ";
//	cin >> temp.job;
//	cout << "����ó�� �Է��ϼ��� => ";
//	cin >> temp.tel;
//	cout << "�̸����� �Է��ϼ��� => ";
//	cin >> temp.email;
//
//	return temp;
//}


//8.6
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//void main()
//{
//	namecard x = { "������", "�л�", "123" , "asdf" };
//	namecard y = { "�̴���", "����", "333" , "aerw" };
//	namecard* p;
//	p = &x;
//	cout << "  �̸�    ����     ����ó     �̸���" << endl;
//	cout << "======================================" << endl;
//	cout << (*p).name << "  " << (*p).job << "  " << (*p).tel << "  " << (*p).email << endl;
//
//	p = &y;
//	cout << endl;
//	cout << p->name << "  " << p->job << "  " << p->tel << "  " << p->email << endl;
//	cout << "======================================" << endl;
//	cout << sizeof(x) << endl;
//	cout << sizeof(p) << endl;
//}

//8.7
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//
//void structPrn(namecard temp);
//void structInput(namecard* pTemp);
//
//void main()
//{
//	namecard x, y, z;
//
//	structInput(&x);
//	structInput(&y);
//	structInput(&z);
//
//	cout << "�̸�   ����     ����ó     �̸���" << endl;
//	cout << "==============================================" << endl;
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout << endl << "=============================================" << endl;
//}
//void structPrn(namecard temp)
//{
//	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
//}
//void structInput(namecard *pTemp)
//{
//cout << endl;
//cout << "�̸��� �Է��ϼ��� => ";
//cin >> pTemp->name;
//cout << "������ �Է��ϼ��� => ";
//cin >> pTemp->job;
//cout << "����ó�� �Է��ϼ��� => ";
//cin >> pTemp->tel;
//cout << "�̸����� �Է��ϼ��� => ";
//cin >> pTemp->email;
//}

////8.8
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//
//void structPrn(namecard temp);
//void structInput(namecard &Temp);
//
//void main()
//{
//	namecard x, y, z;
//
//	structInput(x);
//	structInput(y);
//	structInput(z);
//
//	cout << "�̸�   ����     ����ó     �̸���" << endl;
//	cout << "==============================================" << endl;
//	structPrn(x);
//	structPrn(y);
//	structPrn(z);
//	cout << endl << "=============================================" << endl;
//}
//void structPrn(namecard temp)
//{
//	cout << "\n" << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
//}
//void structInput(namecard &temp)
//{
//	cout << endl;
//	cout << "�̸��� �Է��ϼ��� => ";
//	cin >> temp.name;
//	cout << "������ �Է��ϼ��� => ";
//	cin >> temp.job;
//	cout << "����ó�� �Է��ϼ��� => ";
//	cin >> temp.tel;
//	cout << "�̸����� �Է��ϼ��� => ";
//	cin >> temp.email;
//}

//9.9
//#include <iostream>
//using namespace std;
//struct namecard
//{
//	char name[20];
//	char job[30];
//	char tel[20];
//	char email[40];
//};
//void main()
//{
//	namecard x[3] = { { "������", "�л�", "123" , "asdf" },
//		{ "�̴���", "����", "333" , "aerw" },
//		{ "���̳�", "�F��", "112" , "asfr" }
//	};
//	cout << "�̸�   ����     ����ó     �̸���" << endl;
//	cout << "==============================================" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << x[i].name << "  " << x[i].job << "  " << x[i].tel << "  " << x[i].email << endl;
//	}
//	cout << "==============================================" << endl;
//}