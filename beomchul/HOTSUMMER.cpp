#include <iostream>

using namespace std;


int main(void) {
	int sum=0;
	int T;
	int elec;
	int A[9];
	int zero;

	cin>> T;

	for (zero=0; zero<T; zero++){
		cin >> elec;
		for (int i=0; i <9; i++){
			cin >> A[i];
			sum = sum+ A[i];
			if(A[i]>1000 && A[i]< 0){
				break;
			}

		}
		if (elec>=sum){
			cout << "YES"<< endl;
		}
   		else{
			cout<< "NO" << endl;
		}
	}
}
