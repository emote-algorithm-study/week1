#include <iostream>
using namespace std;
#define MAX 100

int main()
{
	int T, i, j, W, sum = 0;
	int A[9];

	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> W;
		for (j = 0; j < 9; j++)
		{
			cin >> A[j];
		}

		for (j = 0; j < 9; j++)
		{
			sum += A[j];
		}
		if (sum <= W) {
			cout << "YES" << endl;;
		}
		else
		{
			cout << "NO" << endl;
		}

		sum = 0;
	}


	return 0;
}