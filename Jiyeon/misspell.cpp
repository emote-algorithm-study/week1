#include <iostream>
#include <string>
#include <vector>
#include <cctype> //isupper 함수 사용을 위해
using namespace std;

string misspell();

int main(){
    int numOfTest;
    vector<string> result;
    
    cin >> numOfTest;
    
    for(int i=0; i<numOfTest; i++){
        result.push_back(misspell());
    }
    
    for(int i=0; i<result.size(); i++){
        cout << i+1 << " " << result[i] << endl;
    }
    
    return 0;
}

string misspell(){
    string inputString;
    string resultString;
    int missspellIndex;
    
//label:
    cin >> missspellIndex >> inputString;
    
    if(missspellIndex > inputString.size()){
        cout << "Wrong Input!" << endl;
        return "";
    }
    
    for(int i=0; i<inputString.size(); i++){
        if(isupper(inputString[i])==0){
            cout << "Wrong Input! 다시 입력하세요." << endl;
            //goto <#label#>;
        }
    }
    
    resultString = inputString.substr(0, missspellIndex-1) + inputString.substr(missspellIndex+1, inputString.size());
    
    return resultString;
}
