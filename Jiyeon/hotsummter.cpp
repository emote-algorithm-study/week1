#include <iostream>
#include <string>
#include <vector>
using namespace std;


string hotsummer();

int main(){
    int numOfBuilding;
    vector <string> result;
    
    cin >> numOfBuilding;
    
    for(int i=0; i < numOfBuilding; i++){
        result.push_back(hotsummer());
    }
    
    for (int i=0; i<result.size(); i++){
        cout << result[i] << endl;
    }
    
    return 0;
}


string hotsummer(){
    vector <int> eachElectricity(9, 0);
    int goalOfElectricity;
    int sum = 0;
    
    cout << "목표 : ";
    cin >> goalOfElectricity;
    
    //내가 생각해도 여기 코드는 진짜 ㄹㅇ 별로다
    cin >> eachElectricity[0] >> eachElectricity[1] >> eachElectricity[2] >> eachElectricity[3] >> eachElectricity[4] >> eachElectricity[5] >>
    eachElectricity[6] >> eachElectricity[7] >> eachElectricity[8];
    
    
    for(int i=0; i < eachElectricity.size(); i++){
        sum += eachElectricity[i];
    }
    
    if(goalOfElectricity >= sum){
        return "YES";
    }else{
        return "NO";
    }
    
}
