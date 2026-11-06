#include<bits/stdc++.h>
using namespace std;
int main(){
    //calculating simple intrest by taking input of principle, rate and time bu the user
    float p, r, t;
    cout<<"Enter the principle amount:";
    cin>> p;
    cout<<"Enter the rate:";
    cin>> r;
    cout<<"Enter the time:";
    cin>> t;
    float si = (p*r*t)/100;
    cout<<"The simple interest on the amount is:"<<si;
}