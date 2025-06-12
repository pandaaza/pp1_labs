// 7 task simple interest calc
#include <iostream>
using namespace std;
int main(){
    cout<<"enter principal amount, rate of interest, and time:";
    float P;
    int rate;
    float time;
    double SI;
    cin>>P>>rate>>time;
    SI = (P*rate*time)/100;
    cout << "Simple Interest is " << SI <<endl;
    return 0;
}
