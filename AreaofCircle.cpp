#include<iostream>
using namespace std;
int main(){
    const float py=3.14;
    float radiusofcircle;
    float areaofcircle;
    cout<<"Enter the Radius of the circle:";
    cin>>radiusofcircle;
    areaofcircle=py*radiusofcircle*radiusofcircle;
    cout<<"Area of Circle of radius '"<<radiusofcircle<<"'is"<<areaofcircle<<endl;
    return 0;
}