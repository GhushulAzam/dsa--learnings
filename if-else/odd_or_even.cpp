#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a postive integer:";
    cin>>a;
    if(a<0){
        cout<<"Please enter a positive integer only.";
    }
    else{
        if(a%2==0){
            cout<<"The number is even.";
        }
        else{
            cout<<"The number is odd.";
        }
    }
}