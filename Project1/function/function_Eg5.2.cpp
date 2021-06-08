//#include <iostream>
//#include <cstdlib> //random(max)함수 적용
//#include <ctime> //time함수 적용
//int main()
//{
//	using namespace std;
//	int random;
//	srand(time(NULL));
//	//이게 없으면 계속 같은 난수표에서 난수를 뽑으므로
//	//같은 동일한 난수가 만들어진다.
//	//난수가 정규분포를 따른다. -> 공간데이터 분석에 사용
//	//map매칭 알고리즘에 사용
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 10; j++) {
//			random = rand() % 10;
//			cout << random << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
int main()
{
	int i;
	int total = 0;
	int random;
	for (int z = 0; z <= 10; z++)
	{
		random = rand() % 11;
		total = total + random;
		cout << total << endl;
	}
}