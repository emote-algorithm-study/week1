#include <iostream>
using namespace std;

int main()
{
	int T, i;
	double val;
	double conv[1000];
	string convunit[1000];

	string unit;

	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> val >> unit;

		if (unit.compare("kg") == 0)
		{
			conv[i] = val * 2.2046;
			convunit[i] = "lb";
		}
		else if (unit.compare("l") == 0)
		{
			conv[i] = val * 0.2642;
			convunit[i] = "g";
		}
		else if (unit.compare("lb") == 0)
		{
			conv[i] = val * 0.4536;
			convunit[i] = "kg";
		}
		else if (unit.compare("g") == 0)
		{
			conv[i] = val * 3.7854;
			convunit[i] = "l";
		}

	}

	cout.setf(ios::fixed);
	cout.precision(4);
	for (i = 0; i < T; i++)
	{
		cout << i + 1 << " " << conv[i] << " " << convunit[i] << endl;
	}

	return 0;
}