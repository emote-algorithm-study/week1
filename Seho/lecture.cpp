#include <iostream>
using namespace	std;


int main()
{
	int T, len;
	string in;
	string out[1000];

	string temp[500]; // 최대길이 1000의 절반
	int tempmin;

	cin >> T;

	for (int i = 0; i < T; i++) // i : 입력된 string의 순서
	{
		cin >> in;
		len = in.length(); // 입력된 string의 길이(=even)
		
		for (int j = 0; j < len / 2; j++)
		{
			temp[j] = in.substr(2*j, 2); // temp는 in string을 j(len/2)개로 나눈 값을 가짐.
		}
		

		for (int j = 0; j < len / 2 - 1; j++) // temp를 정렬
		{ // j : '0' ~ 'len/2 - 1' 까지 오름차순 정렬 시작
			tempmin = j; // j를 최소값으로 두고,
			for (int k = j +1; k < len / 2; k++) // j + 1부터 탐색하여 최소값을 찾음.
			{
				if (temp[k].compare(temp[tempmin]) == -1) // 탐색중(k : j+1 ~ len/2)더 작은 값을 찾으면 tempmin 교체
				{
					tempmin = k;
				}
			}
			swap(temp[j], temp[tempmin]); // j번째와 최소값 서로 교체.
		}

		for (int j = 0; j < len / 2; j++)
		{
			out[i] += temp[j]; // out에 이어 붙임.
		}


		in.clear(); // 입력 초기화
	}

	for (int i = 0; i < T; i++)
	{
		cout << out[i] << endl;
	}
	
	
	return 0;
}