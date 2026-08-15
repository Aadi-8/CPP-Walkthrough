#include<bits/stdc++.h>
using namespace std;

//Array
int main(){
    int arr[5];          /*we have created array with five boxes having indices 0-4*/
    arr[0]=9;            //here int is container means we can only store integer in array
    arr[1]=8;            //we have to specify what we are storing like float long
    arr[2]=7;
    arr[3]=6;
    arr[4]=5;

    arr[2]+=10;         //We can perform oprations on array
    cout << arr[2] << "\n";

    //2D Array like matrices 
    int arr2d[3][4];      //3 row and 4 column and named like matrices i,j arr2d is just variable
    arr2d[1][2]=35;
    cout << arr2d[1][2];
    return 0;
}