// 8 task bmi calc
#include <iostream>
using namespace std;
int main(){
    cout<<"enter your weight and height: ";
    float weight;
    float height;
    cin>>weight>>height;
    float BMI;
    BMI = weight/(height*height);
    cout<<"Your BMI is "<<BMI<<endl;
    return 0;
}