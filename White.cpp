#include<bits/stdc++.h>
using namespace std;

void whoami(){
    cout << "Hi I'm Aadi" << endl;   //non parameterised func
}
void welcome(string name){
    cout << "welcome " << name << endl;   //parameterised func
}
int sum(int num1 , int num2 ){
    int num3 = num1+num2 ;
    return num3;
}
void value(int num4){
    num4 += 10;
    cout << num4 <<endl;
}
void reference(int &num4){
    num4 += 10;
    cout << num4 <<endl;
}
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

/* Functions are set of code which performs something for you
 Functions are used to modularise code
 Functions are used to increase readability
 Functions are used to use same code multiple times
 void -> which does not returns anything we can define it outside the main
 return
 parameterised
 non parameterised
*/
whoami();    //simply calling a void func NON PARAMETERISED
welcome("aman");
cout << sum(4,5) <<endl;

//pass by value means it do not change the value only takes a copy and perform the the function
int num4;
num4 = 5;
value(num4);                 //This execute the func with the copy of num4
cout << num4 <<endl;         //do not change num4 address
//pass by reference means it changed the original value/strings
int num5;
num5 = 8;           
reference(num5);             //This execute the func with original address of num5
cout << num5 <<endl;         //This changed the num5 forever 
//And we can do with strings and array too
    return 0;
}