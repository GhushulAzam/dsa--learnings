#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first side of triangle:";
    cin>> a;
    cout<<"Enter the second side of triangle:";
    cin>> b;
    cout<<"Enter the third side of triangle:";
    cin>> c;
    if(a+b>c and a+c>b and b+c>a){
        cout<<"The triangle is possible with these sides.";
    }
    else{
        cout<<"The triangle is not possible with these sides.";
    }

}