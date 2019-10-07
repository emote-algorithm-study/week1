#include <iostream>
#include <string>
using namespace std;

void encrypt();

int main(){
    int numOfTest;
    string inputString;
    
    cin >> numOfTest;
    for (int i=0; i<numOfTest; i++){
        //cin >> inputString;
        encrypt();
    }
}

void encrypt(){
    string inputString;
    string convertString= "";
    
    cin >> inputString;
    
    for(int i=0; i < inputString.size(); i = i+2){
        convertString += inputString[i];
    }
    for(int i=1; i<inputString.size(); i = i+2){
        convertString += inputString[i];
    }
    
    cout << convertString << endl;
}
