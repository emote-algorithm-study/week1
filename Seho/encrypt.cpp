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

		if (in.length() % 2 == 0) { // ���ڿ��� ¦���� ���
			for (int j = 0; j < in.length(); j += 2)
			{
				ineven += in[j];
				inodd += in[j + 1];
			}
		}
		else // ���ڿ� ���̰� Ȧ���ΰ��
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