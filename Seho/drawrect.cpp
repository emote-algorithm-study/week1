#include <iostream>
using namespace std;

int main()
{
	int p1x, p1y, p2x, p2y, p3x, p3y;
	int T;
	int p4x[1000];
	int p4y[1000];


	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> p1x >> p1y;
		cin >> p2x >> p2y;
		cin >> p3x >> p3y;


		//find p4x
		if (p1x == p2x)
		{
			p4x[i] = p3x;
		}
		else if (p2x == p3x)
		{
			p4x[i] = p1x;
		}
		else // (p1x == p3x)
		{
			p4x[i] = p2x;
		}

		// find p4y
		if (p1y == p2y)
		{
			p4y[i] = p3y;
		}
		else if (p2y == p3y)
		{
			p4y[i] = p1y;
		}
		else // (p1x == p3x)
		{
			p4y[i] = p2y;
		}

	}


	for (int i = 0; i < T; i++) {
		cout << p4x[i] << " " << p4y[i] << endl;
	}


	return 0;
}