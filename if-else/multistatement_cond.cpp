//beta if number is divisible by 3 only.
//delta if number is divisible by 5 & 3.
//gamma if number is not divisible by 5 or 3.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n:";
    cin>> n;
    if(n%5 == 0 and n%3 == 0) cout<<"Delta";
    else if(n%5 == 0) cout<<"alpha";
    else if(n%3 == 0) cout<<"Beta";
    else cout<<"Gamma";
}