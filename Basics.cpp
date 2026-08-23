#include <bits/stdc++.h>
using namespace std;
int n = 0;
string s;
void name(){
    if (n==5){
        return;
    }
    else{
        cout << s << endl;
    }
    n++;
    name ();
}
int main(){
    cout << "Entre: ";
    cin >> s;
    
    name();
   
}
