#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

double kgToPound(double kg);
double poundsToKg(double pound);
double literToGallon(double liter);
double gallonToLiter(double gallon);

string convert();


int main(){
    int numOfTest;
    vector<string> result;
    
    
    cin >> numOfTest;
    
    for(int i=0; i<numOfTest; i++){
        result.push_back(convert());
    }
    
    for(int i=0; i<result.size(); i++){
        cout << fixed;
        //cout.precision(4);
        cout << setprecision(4);
        cout << result[i] << endl;
    }
    
    return 0;
}

string convert(){
    double input;
    double result;
    
    string resultString = "";
    string measurement;
    string convertedMeasurement;
    
    cin >> input >> measurement;
    
    if(measurement == "kg"){
        result = kgToPound(input);
        convertedMeasurement = "lb";
    }
    else if(measurement == "lb"){
        result = poundsToKg(input);
        convertedMeasurement = "kg";
    }
    else if(measurement == "l"){
        result = literToGallon(input);
        convertedMeasurement = "g";
    }else if(measurement == "g"){
        result = gallonToLiter(input);
        convertedMeasurement = "l";
    }else{
        cout << "Wrong Input!" << endl;
        return "";
    }
    
    resultString = to_string(result) + " " + convertedMeasurement;
    
    return resultString;
}


double kgToPound(double kg){
    return kg * 2.2046;
}

double poundsToKg(double pound){
    return pound * 0.4536;
}
double literToGallon(double liter){
    return liter * 0.2642;
}
double gallonToLiter(double gallon){
    return gallon * 3.7854;
}
