#include<bits/stdc++.h>
using namespace std;

//Must do patterns
void p1(int n1){
    for (int a=0;a<n1;a=a+1){
        for (int b=0;b<n1;b=b+1){
           cout << "*" ;

        }
        cout <<endl;
    }
}
int main(){

    #ifndef ONLINE_JUDGE                    //redirect c++ to read input 
    freopen("int2.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n1;
    cin >> n1;
    p1(n1);

}