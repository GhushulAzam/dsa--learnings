#include<bits/stdc++.h>
using namespace std;
int main(){
    //Take a real number input and check if it is an integer or not.
    float a;
    cout<<"Enter a real number:";
    cin>>a;
    int b = (int)a;
    if(a==b) cout<<"The input number is an Integer.";
    else cout<<"The input number is not an Integer.";
}