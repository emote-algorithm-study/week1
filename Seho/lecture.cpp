#include <iostream>
using namespace	std;


int main()
{
	int T, len;
	string in;
	string out[1000];

	string temp[500]; // �ִ���� 1000�� ����
	int tempmin;

	cin >> T;

	for (int i = 0; i < T; i++) // i : �Էµ� string�� ����
	{
		cin >> in;
		len = in.length(); // �Էµ� string�� ����(=even)
		
		for (int j = 0; j < len / 2; j++)
		{
			temp[j] = in.substr(2*j, 2); // temp�� in string�� j(len/2)���� ���� ���� ����.
		}
		

		for (int j = 0; j < len / 2 - 1; j++) // temp�� ����
		{ // j : '0' ~ 'len/2 - 1' ���� �������� ���� ����
			tempmin = j; // j�� �ּҰ����� �ΰ�,
			for (int k = j +1; k < len / 2; k++) // j + 1���� Ž���Ͽ� �ּҰ��� ã��.
			{
				if (temp[k].compare(temp[tempmin]) == -1) // Ž����(k : j+1 ~ len/2)�� ���� ���� ã���� tempmin ��ü
				{
					tempmin = k;
				}
			}
			swap(temp[j], temp[tempmin]); // j��°�� �ּҰ� ���� ��ü.
		}

		for (int j = 0; j < len / 2; j++)
		{
			out[i] += temp[j]; // out�� �̾� ����.
		}


		in.clear(); // �Է� �ʱ�ȭ
	}

	for (int i = 0; i < T; i++)
	{
		cout << out[i] << endl;
	}
	
	
	return 0;
}