#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void stringCmp();

int main(){
    int numOfTest;
    
    cout << "몇번 반복할거?" << endl;
    cin >> numOfTest;
    
    for(int i=0; i<numOfTest; i++){
        stringCmp();
    }
    
    return 0;
}

void stringCmp(){
    string input;
    string s, temp;
    string result ="";
    vector<string> input_array;
    
    cin >> input;
    
    if(input.size()%2 != 0){
        cout << "입력이 2의 배수가 아닙니다." << endl;
        return;
    }
    
    for(int i=0; i < input.size(); i = i+2){
        s = input.substr(i, 2);
        input_array.push_back(s);
    }
    
    sort(input_array.begin(), input_array.end());
    
    for(int i=0; i<input_array.size(); i++)
        cout << input_array[i];
    cout << endl;
}
