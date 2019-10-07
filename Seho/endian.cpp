#include <iostream>
#define HEX 8
using namespace std;


char* dec2hex(unsigned int dec);

char h[HEX+1] = "00000000";
char h_inverse[HEX+1] = "00000000";

void init()
{
	for (int i = 0; i < HEX; i++)
	{
		h[i] = '0';
		h_inverse[i] = '0';
	}
}

unsigned long int hex2dec(char* hex)
{
	int len = HEX;
	int base = 1;
	unsigned long int ret = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (hex[i] >= '0' && hex[i] <= '9') ret += (hex[i] - 48) * base;
		else if (hex[i] >= 'A' && hex[i] <= 'F') ret += (hex[i] - 55) * base;
		else if (hex[i] >= 'a' && hex[i] <= 'f') ret += (hex[i] - 87) * base;
		base *= 16;
	}
	return ret;
}

int main()
{

	int N;
	unsigned int in;
	unsigned long long int rslt[10000];


	cin >> N;


	for (int i = 0; i < N; i++)
	{
		cin >> in;
		rslt[i] = hex2dec(dec2hex(in));
		init();
	}


	for (int i = 0; i < N; i++)
	{
		cout << rslt[i] << endl;
		
	}

	return 0;
}

char* dec2hex(unsigned int dec)
{

	int position = 0;
	int len = 0;
	int mod = 0;
	int i = 0;

	while (1)
	{
		mod = dec % 16;
		if (mod < 10)
		{
			h[position] = 48 + mod; 
		}
		else
		{
			h[position] = 65 + (mod - 10);
		}

		dec /= 16;

		position++;

		if (dec == 0) { 
			position--; // position 인덱스에는 가장 높은 자릿수.
			break;
		}
	} // 변환시 인덱스 0에 가장 낮은 자리수
	// 따라서 실제 표기 방식으로 변환하려면 역순이 되어야함.

	for (i =0; i < HEX; i++)
	{
		h_inverse[i] = h[HEX - 1 - i]; // 
	}
	for (i = 0; i < HEX; i++)
	{
		 h[i] = h_inverse[i];
	}


	//for (int i = len; i >= 0; i--)
	//{
	//	if ((i % 4) == 0)
	//	{
	//		cout << h_inverse[i];
	//		cout << " ";
	//	}
	//	else
	//	{
	//		cout << h_inverse[i];
	//	}
	//} 

	// 변환 확인용

	i = 0;
	while (i < HEX)
	{
		// A BC DE -> DE BC 0A
		h_inverse[i + 1] = h[HEX - 1 - i];
		h_inverse[i] = h[HEX - 1 - i - 1];
		i += 2;

	}

	//if (position%2 == 0) // 홀수개 인경우
	//{
	//	h_inverse[HEX-1 - 1] = '0';
	//	h_inverse[HEX-1 - 1 + 1] = h[0]; // ASCII 숫자 0 : 80
	//}



	return h_inverse;
}
