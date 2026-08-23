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
void p4(int n){
    for (int g=0;g<n;g++){
        for (int h=1; h<=g ; h++){
           cout << g;

        }
        cout <<endl;
    }
}
void p5(int n){
    for (int i=0;i<n;i++){
        for (int j=n;j>i;j=j-1){
           cout << "* "<<j ;

        }
        cout <<endl;
    }
}
void p6(int n6){
    for (int i=0;i<n6;i++){
        for (int j=0;j<n6-i-1;j=j+1){
            cout << "  ";
        }
        for (int j=0;j<2*i+1;j=j+1){
            cout << "* ";
        }
        for (int j=0;j<n6-i-1;j=j+1){     //can use third loop if asked to show line otherwise leave it only with 2 loops
            cout << "  ";
        }
        cout <<endl;
    }
}
void p7(int n){
    for (int i=0;i<n;i++){
        for (int k=0;k<i;k++){
            cout << "  ";
        }
        for (int j=0;j<2*n-(2*i+1);j++){
           cout << "* " ;

        }
        cout <<endl;
    }
}
void p9(int n9){
    for (int i=0;i<2*n9-1;i++){
        if (i<n9) { 
            for (int j=0;j<=i;j++){
            cout << "*";
        }
    }
        else{
            for (int k=1;k<2*n9-i;k++){
                cout << "*";
            }
        }
        cout << endl;
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

    int n6=5;
    p6(n6);

    int n7=5;
    p7(n7);

    int n8=5;
    p6(n8);
    p7(n8);

    int n9=5;
    p9(n9);

    int x=458;
    cout << x%10 <<endl;
                                            //Reverse the no as integer
    int xx;
    cout << "entre ";
    cin >> xx;
    int ans=0;
    int len = to_string(xx).size();          //int don't have len func so convert it into string first
    for (int i=0;i<len;i++){
   
        int aa = xx%10;
        ans = ans*10+aa;
         xx = xx/10;
    }
    cout << ans;
    
}