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
//	cout << "이름을 입력하세요 -> ";
//	cin >> man.name;
//	cout << "직업을 입력하세요 -> ";
//	cin >> man.job;
//	cout << "연락처를 입력하세요 ->";
//	cin >> man.tel;
//	cout << "이메일을 입력하세요 ->";
//	cin >> man.email;
//
//	cout << "\n 입력받은 데이터를 출력합니다.";
//	cout << "\n 이름 \t 직업 \t 연락처 \t 이메일";
//	cout << "\n===================================";
//	cout << "\n " << man.name << "\t " << man.job << "\t " << man.tel << "\t " << man.email;
//	cout << "\n===================================";
//	cout << "sizeof(namecard) => " << sizeof(namecard) << endl;
//	cout << "구조체 변수의 메모리 사이즈 => " << sizeof(namecard) << endl;
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
//	namecard x = { "김주현", "학생", "123" , "asdf" };
//	namecard y = { "이누리", "ㅇ날", "333" , "aerw" };
//	namecard z = { "인이나", "쟂ㄹ", "112" , "asfr" };
//
//	cout << "이름   직업     연락처     이메일" << endl;
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
//	namecard x = { "김주현", "학생", "123" , "asdf" };
//	namecard y;
//	y = x;
//
//	cout << "이름   직업     연락처     이메일" << endl;
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
//	namecard x = { "김주현", "학생", "123" , "asdf" };
//	namecard y = { "이누리", "ㅇ날", "333" , "aerw" };
//	namecard z = { "인이나", "쟂ㄹ", "112" , "asfr" };
//
//	cout << "이름   직업     연락처     이메일" << endl;
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
//	cout << "이름   직업     연락처     이메일" << endl;
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
//	cout << "이름을 입력하세요 => ";
//	cin >> temp.name;
//	cout << "직업을 입력하세요 => ";
//	cin >> temp.job;
//	cout << "연락처를 입력하세요 => ";
//	cin >> temp.tel;
//	cout << "이메일을 입력하세요 => ";
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
//	namecard x = { "김주현", "학생", "123" , "asdf" };
//	namecard y = { "이누리", "ㅇ날", "333" , "aerw" };
//	namecard* p;
//	p = &x;
//	cout << "  이름    직업     연락처     이메일" << endl;
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
//	cout << "이름   직업     연락처     이메일" << endl;
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
//cout << "이름을 입력하세요 => ";
//cin >> pTemp->name;
//cout << "직업을 입력하세요 => ";
//cin >> pTemp->job;
//cout << "연락처를 입력하세요 => ";
//cin >> pTemp->tel;
//cout << "이메일을 입력하세요 => ";
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
//	cout << "이름   직업     연락처     이메일" << endl;
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
//	cout << "이름을 입력하세요 => ";
//	cin >> temp.name;
//	cout << "직업을 입력하세요 => ";
//	cin >> temp.job;
//	cout << "연락처를 입력하세요 => ";
//	cin >> temp.tel;
//	cout << "이메일을 입력하세요 => ";
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
//	namecard x[3] = { { "김주현", "학생", "123" , "asdf" },
//		{ "이누리", "ㅇ날", "333" , "aerw" },
//		{ "인이나", "쟂ㄹ", "112" , "asfr" }
//	};
//	cout << "이름   직업     연락처     이메일" << endl;
//	cout << "==============================================" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << x[i].name << "  " << x[i].job << "  " << x[i].tel << "  " << x[i].email << endl;
//	}
//	cout << "==============================================" << endl;
//}