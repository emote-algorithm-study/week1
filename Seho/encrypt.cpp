#include <iostream>
using namespace std;

int main()
{
	int T;
	string in, ineven, inodd;
	string encrypt[10];

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> in;
		// h e l l o

		if (in.length() % 2 == 0) { // 문자열이 짝수인 경우
			for (int j = 0; j < in.length(); j += 2)
			{
				ineven += in[j];
				inodd += in[j + 1];
			}
		}
		else // 문자열 길이가 홀수인경우
		{
			for (int j = 0; j < in.length() - 1; j += 2)
			{
				ineven += in[j];
				inodd += in[j + 1];
			}
			ineven += in.back();
		}

		encrypt[i] = ineven + inodd;
		ineven.clear();
		inodd.clear();
	}

	for (int i = 0; i < T; i++)
	{
		cout << encrypt[i] << endl;
	}

	return 0;
}