#include <bits/stdc++.h>
using namespace std;

void name(int i , int n ){
    if (i>n) return;
    cout << "Aadi" << endl;
    name(i+1,n);
    
}
void num(int i , int n ){
    if (i>n) return;
    cout << i << endl;
    num(i+1,n);
}
void revnum(int i){
    if (i==0) return;
    cout << i << endl;
    revnum(i-1);
}
void Add(int i, int sum){
    if (i<1){
        cout << sum <<endl;
    return;
    }
    Add(i-1,sum+i);
}
int Add2(int i){                 //If we return number we cannot add in void (int + void)
    if (i==0) return 0 ;
    return i + Add2(i-1);
}
int factorial(int i){
    if (i < 1) return 1 ;
    return i * factorial(i-1);
}
int main(){
    name(1,4);
    num(1,4);
    revnum(4);
    Add(4,0);
    cout << Add2(3) << endl;
    cout << factorial(4) << endl;
    return 0;
}
