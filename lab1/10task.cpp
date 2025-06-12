//10 task even odd
#include <iostream>
using namespace std;
int main(){
    cout<<"enter number";
    int a;
    cin>>a;
    if(a==0){
        cout<<"number is zero";
    }
    else if(a%2==0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
    return 0;
}