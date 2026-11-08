#include<bits/stdc++.h>
using namespace std;
int main(){
    //taking input from user and checking if the number is divisible by 5 or not
    int a;
    cout<<"Enter the number you want to check if divisible by 5 or not:";
    cin>>a;
    if(a%5==0){
        cout<<"The given number is divisible by 5.";
    }
    else{
        cout<<"The given number is not divisible by 5.";
    }
}