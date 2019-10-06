#include <iostream>
#include <cmath>
using namespace std;

typedef struct Point{
    int x;
    int y;
} Point;

double Distance(Point x, Point y);
Point findAPoint(Point p1, Point p2, Point p3);

int main(){
    int numOfTest;
    Point p1, p2, p3;
    Point result;
    
    cin >> numOfTest;
    
    for(int i=0; i<numOfTest; i++){
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;
        
        //result = findAPoint(p1, p2, p3);
        if(Distance(p1, p2) == Distance(p1, p3)){
            result.x = p2.x + p3.x - p1.x;
            result.y = p2.x + p3.x - p1.x;
        
        }
        else if(Distance(p1, p2) == Distance(p2, p3)){
            result.x = p1.x + p3.x - p2.x;
            result.y = p1.y + p3.y - p2.y;
        }
        else{
            result.x = p1.x + p2.x - p3.x;
            result.y = p1.y + p2.y - p3.y;
        }        cout << result.x << " " << result.y << endl;
    }
    
    return 0;
}

double Distance(Point p1, Point p2){
    double distance;
    
    distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    
    return distance;
}
