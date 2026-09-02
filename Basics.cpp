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
int fabonaci(int n){
    if (n<=1){
        return n;
    }
     return fabonaci(n-1)+fabonaci(n-2);
}
void sub(int ind,vector<int> &ds,int arr[],int n){
    if (ind == n){
        for (auto tt:ds) {
        cout << tt << " ";
    }

   if(ds.size()==0){
    cout << "{}";
   }
    cout << endl;
    return;
}

    sub(ind+1,ds,arr,n);
    ds.push_back(arr[ind]);
    sub(ind+1,ds,arr,n);
    ds.pop_back();
    return;
}
int main(){
    name(1,4);
    num(1,4);
    revnum(4);
    Add(4,0);
    cout << Add2(3) << endl;
    cout << "Factorial "<< factorial(4) << endl;
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
    string d="madam";
    cout << "Entre your pallindrome string " << d<< endl;
  
    int len=d.size();
    int a=0;
    pallindrome(d,a,len-1);
    cout << "Fabonaci"<< fabonaci(4) << endl;

    int arr2[] = {1,5,3};
    int aaa=3;
    vector<int> ds;
    sub(0,ds,arr2,aaa);

    //Hashing
    int n=5;                              //We can take input or declare array
    int arr3[n] = {1,2,1,3,12};
    int hash[13] = {0};                   //Hash is not a function just another array
    for (int i=0; i<n ;i++){
        hash[arr3[i]] += 1;
    }                                     //we can use loop to ask the inputs
    cout << "1 appear " << hash[1] <<" times" << endl;
    cout << "12 appear " << hash[12] <<" times" << endl;

    string h="abdadbhsbhdjssbbhh";
    int hash1[26]={0};                       // this meth used only when we know there's all small letter
    for (int i=0;i<h.size();i++){
        hash1[h[i]-'a']++;
    }
    cout << hash1['d'-'a']<< endl;         //we use char indexing

    return 0;
}
