#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >>y;
    //int,long,long long for storing integer of diffrent ranges
    int a = 78;
    long b = 400;
    long long c = 30000;
    //float,double for decimals and can store numbers 
    float d = 3.6;
    double e = 3.99471;
    cout << "value is:" << x << " and other is :" << y;
    cout << "\na is "<<a <<  "\nb is " << b << "\nc is " << c <<"\nfloat d is "<< d <<"\ndouble e is "<< e; ; 

    // strings and getline for strings,lines etc.
    string s1 , s2 ;
    cin >> s1 >> s2;
    cout << "\n"<<s1 << " "<< s2 <<"\n"; //here we need to add a string variable for every word after a space
    string str ;
    cin.ignore();                  //throws the leftover \n 
    getline(cin,str);              //Tips: Always add cin.ignore before jumping on getline
    cout << str;                   //getline read till the end of the line

    char ee='@';                   // to store single character 
    cout << ee;

    int age;
    cin >> age;
    if (age>=18){
        cout << "\nYou are an adult";
    }
    else if(age<18){
        cout << "\nYou are not an adult";
    }
    return 0;
}
