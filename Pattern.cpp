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
void p2(int n2){
    for (int c=0;c<n2;c++){
        
        for (int d=0;d<c+1;d++){
            cout << "* ";
        }
        cout <<endl;
    }

}
void p3(int n3){
    for (int e=0;e<n3;e++){
        for (int f=1; f<=e ; f++){
           cout << f;

        }
        cout <<endl;
    }
}
int main(){

    // #ifndef ONLINE_JUDGE                    //redirect c++ to read input 
    // freopen("int2.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n1=4;
    p1(n1);
    
    int n2=5;
    p2(n2);

    int n3=5;
    p3(n3);

    return 0;
}