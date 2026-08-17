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
void p4(int n4){
    for (int g=0;g<n4;g++){
        for (int h=1; h<=g ; h++){
           cout << g;

        }
        cout <<endl;
    }
}
void p5(int n5){
    for (int i=0;i<n5;i++){
        for (int j=n5;j>i;j=j-1){
           cout << "* " ;

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

    int n4=5;
    p4(n4);

    int n5=5;
    p5(n5);

    return 0;
}