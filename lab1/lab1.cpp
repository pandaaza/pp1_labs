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

// 9 task average
/*#include <iostream>
using namespace std;
int main(){
    cout<<"enter three number:";
    int a,b,c;
    cin>>a>>b>>c;
    int ave = (a+b+c)/3;
    cout<<"The average is "<<ave<<endl;
    return 0;
}*/

// 8 task bmi calc
/*#include <iostream>
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
}*/

// 7 task simple interest calc
/*#include <iostream>
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
}*/

// 6 task square
/*#include <iostream>
using namespace std;
int main(){
    cout<<"enter number: ";
    int num;
    cin >> num;
    int square;
    square = num * num;
    cout<<"The square is "<< square << endl;
    return 0;
}*/

// 5 task celsius conv in fahrnheit
/*
#include <iostream>
using namespace std;
int main() {
    cout << "enter temp in Celsius: ";
    double C;
    cin >> C;
    double F;
    F = (C * 9/5) + 32;
    cout << "Temperature in Fahrenheit: "<< F << endl;
    return 0;

}
*/

// 4 task how months old
/*#include <iostream>
using namespace std;
int main(){
    cout << "enter your age:";
    int age;
    int months;
    cin >> age;
    months = age * 12;
    cout << "You are " << months << " months old." << endl;
    return 0;
}*/

// 3 task area of circle
/*#include <iostream>
using namespace std;
int main(){
    cout << "enter radius of circle:";
    double r;
    cin >> r;
    double area = 3.14 * r * r;
    cout << "The area is: " << area << endl;
    return 0;
}*/

// 2 task sum
/*#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    cout << "The sum is: " << a + b << endl;
    return 0;
}
*/

// 1 task Enter name and print greeting message
/* #include <iostream>
using namespace std;
int main() {
    cout << "enter your name: ";
    string s;
    cin >> s;
    cout << "Hello, " << s << "!" << endl;
    return 0;
}*/