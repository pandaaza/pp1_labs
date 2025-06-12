// 5 task celsius conv in fahrnheit

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
