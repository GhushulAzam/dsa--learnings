#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a 4-digit number:";
    int n;
    cin>>n;
    if(n<=9999 && n>=1000){
        cout<<"The input no is a four-digit number.";
    }
    else{
        cout<<"The input no is not a four-digit number.";
    }
}