#include <iostream>
using namespace std;

int main()
{
	int T, pos, i, j; // pos는 빼야하는 위치로 1부터 시작.
	string in, ls, rs;
	string out[1000];
	
	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> pos >> in;
		ls = in.substr(0, pos - 1); // 0에서 pos-1의 길이만큼. 
		rs = in.substr(pos); // pos(인덱스)포함하여 끝까지.
		// ex) pos =1 이면, ls는 아무것도 x, rs는 인덱스 1부터 끝. -> 첫번째 문자 제외


		out[i] = ls + rs;

		in.clear(); ls.clear(); rs.clear();
	}

	for (i = 0; i < T; i++)
	{
		cout << i+1 << " " << out[i] << endl;
	}

	return 0;
}