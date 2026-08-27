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
int Add2(int i){                 //If we return number, we cannot add in void (int + void)
    if (i==0) return 0 ;
    return i + Add2(i-1);
}
int factorial(int i){
    if (i < 1) return 1 ;
    return i * factorial(i-1);
}
void reverse1(vector<int>& arr,int i , int n){
    if (i>=n) {
       return ;
    }
    swap(arr[i],arr[n]);
    reverse1(arr,i+1,n-1);
}
bool pallindrome(const string &s ,int i, int n){
    if (i>=n) {
        cout << "It is a pallindrome" << endl ; 
        return true ;
    }
    if (s[i]!=s[n]){
         cout << "Not a pallindrome";
         return false;
    }
    return pallindrome(s,i+1,n-1);
}
int main(){
    name(1,4);
    num(1,4);
    revnum(4);
    Add(4,0);
    cout << Add2(3) << endl;
    cout << factorial(4) << endl;
    // int arraysize;
    // cout << "Entre array size: ";
    // cin >> arraysize;
    // vector<int> arr1(arraysize);
    //  for(int k=0;k<arraysize;k++){
    //         cout << "Fill indexes " << k << ": ";
    //         cin >> arr1[k];
    //     }
    // reverse1(arr1,0,arraysize-1);
    //  for(int k=0;k<arraysize;k++){
    //         cout << arr1[k] << " ";
    //     }
    //     cout << endl;
    string d;
    cout << "Entre your pallindrome string ";
    cin >> d;
  
    int len=d.size();
    int a=0;
    pallindrome(d,a,len-1);
    return 0;
}
