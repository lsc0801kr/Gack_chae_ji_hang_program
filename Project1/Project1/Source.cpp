#include <iostream>

using namespace std;

int main()
{

	int A[3][3] = {
		{1, 1, 1},
		{2, 2, 2},
		{3, 3, 3}
	};

	int B[3][3] = {
	{1, 2, 3},
	{1, 2, 3},
	{1, 2, 3}
	};
	int C[3][3] = { 0 };
	int D[3][3] = { 0 };
	cout << "3*3 행렬의 합" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << C[i][j];
			if (j < 2)cout << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "3*3 행렬의 곱" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				D[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << D[i][j];
			if (j < 2)cout << " ";
		}
		cout << endl;
	}
	return 0;
}