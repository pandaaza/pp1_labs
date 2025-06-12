#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <functional>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    cout << n << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char ch){ return !isspace(ch); })
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch){ return !isspace(ch); }).base(),
        s.end()
    );

    return s;
}

    /*int a;
    long s;
    char d;
    float g;
    long double f;
    cin>>a>>s>>d>>g>>f;  
    cout<<a<<"\n"<<s<<"\n"<<d<<"\n"<<g<<"\n"<<f<<"\n";
    return 0;
    */

    /*
    printf("%.3f\n", g);   
    printf("%.9f\n", f); Через это сделал
    */

    /* Базовый синтаксис
    int items = 50;
    double cost_per_item = 9.99;
    float discount = 0.9;
    double total_cost = items * cost_per_item * discount; 
    char currency = 't';
    
    cout << "Number of items:" << items << "\n";
    cout << "Cost per item:"<< cost_per_item << currency << "\n";
    cout << "Total cost:"<< total_cost << currency << "\n";
    */
 

    /* Записать базовые типы данных.
    int myNum = 5;
    double myFloatNum = 5.99;
    char myLetter = 'B';
    string myText = "Hello";
    bool myBoolean = true; 
    cout<< myNum << "\n";
    cout<< myFloatNum << "\n";
    cout<< myLetter << "\n";
    cout<< myText << "\n";
    cout<< myBoolean << "\n";
    */
