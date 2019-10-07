
#include <iostream>
#include <cstring>
#define SIZE 101
using namespace std;

int main(){
	int T ;
	char A[SIZE];
	string c;


	cin >> T;
	while (T>10 || T<0){
		cin >>T;
	}


	for (int i=0; i<T; i++){
		cin >> A;

		for (int j=0; j<strlen(A); j++){
			if(j%2==0){
				cout << A[j];
			}
			else if (j==0){
				cout<<A[0];
			}
		if (A == "\n") break;
		}
		for(int j=0; j<strlen(A); j++){
			if(j%2==1){
			cout << A[j];
			}
		}
			cout << "\n";
	}



}
	
