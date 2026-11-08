#include<bits/stdc++.h>
using namespace std;
int main(){
    //Take age as input and tell whether the user is allowed to drive or not.
    int age;
    cout<<"Enter the age of the user:";
    cin>> age;
    if(age>=18){
        cout<<"User is eligible for driving!";
    }
    else{
        cout<<"User is not elligible for driving!";
    }
}