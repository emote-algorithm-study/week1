#include <iostream>
using namespace std;

int main()
{
	int T, pos, i, j; // pos�� �����ϴ� ��ġ�� 1���� ����.
	string in, ls, rs;
	string out[1000];
	
	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> pos >> in;
		ls = in.substr(0, pos - 1); // 0���� pos-1�� ���̸�ŭ. 
		rs = in.substr(pos); // pos(�ε���)�����Ͽ� ������.
		// ex) pos =1 �̸�, ls�� �ƹ��͵� x, rs�� �ε��� 1���� ��. -> ù��° ���� ����


		out[i] = ls + rs;

		in.clear(); ls.clear(); rs.clear();
	}

	for (i = 0; i < T; i++)
	{
		cout << i+1 << " " << out[i] << endl;
	}

	return 0;
}