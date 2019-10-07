#include <iostream>
#include <cstring>
#define SIZE 81
using namespace std;

int main(){
	int N;
	char M[SIZE];
	int s;
	int cnt;
	cin>>N;
	if (N<=1000 && N>=1){

		for (int i=0; i<N; i++){
		 	cin >> s;
		 	cin >> M;
		 	cnt = s;
		 	for (int i=s; i<strlen(M); i++){

		 		M[i-1] = M[i];

		 		cnt++;
			 }
			 M[cnt-1] = NULL;
			cout << i+1 << '\0';
		 	cout << M << '\0' <<endl;
			}
	}
}
