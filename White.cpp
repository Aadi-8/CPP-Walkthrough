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
    arr2d[2][3]=65;
    cout << arr2d[1][2] << endl;

    //strings also store via indices
    string text="Matrices";
    int len=text.size();  //we need len to do operations
        text[len-2]='z' ; //we changed e into z 
    cout << text[len-2] << endl;

    //LOOPS
    //For Loops
    int x;   //we define variable type then where do we wanna to stop and how we do increment
    for (int x=1; x<=4; x=x+1){
        cout << x << endl;
        if (x==3){
            cout << "this is 3 " << endl;
        }
    }
    int y=1;   //Same task just syntax modification initialisation here
    while(y<=4){
        cout << y <<endl;
        y=y+1; //increment go in last of while loop
    }

    //do while loop execute the func atleast 1 time even if thr condition not true
    int z=2; 
    do{
        cout << z << endl;
        z =z+1;
    } while(z<=1);       //if we increase z here it works as while loop
    cout << "Out of the loop" << endl;





    return 0;
}