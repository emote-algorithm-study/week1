#include<iostream>
#include<cstring>
#define SIZE 1000
using namespace std;

int main(){

string A;
int N;

double kg,l,lb,g,lb2,g2,T;
double temp;

kg = 1.000;
lb = kg * 2.2046;
l = 1.000;
g = l * 0.2642;
lb2 = 0.4536 * kg;
g2 = 3.7854 * l;


cin >> N;
for (int i=0; i<N; i++){

cin >> T;
cin >> A;



if (A == "kg"){
cout << i+1 << '\0';
temp = T * lb;
cout << temp << '\0' << "lb" << endl;

}
else if (A == "l"){
cout << i+1 << '\0';
temp = T * g;
cout.setf(ios::fixed);
cout.precision(4);
cout << temp << '\0' << "g" << endl;

}
else if (A == "lb"){
cout << i+1 << '\0';
temp = T * lb2;
cout.setf(ios::fixed);
cout.precision(4);
cout << temp << '\0' << "kg" << endl;

}
else{
cout << i+1 << '\0';
temp = T * g2;
cout.setf(ios::fixed);
cout.precision(4);
cout << temp << '\0' << "l" << endl;

}

}

}
