#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first side of triangle:";                                 //cout<<"enter the 3 sides:";
    cin>> a;                                                                   //cin>> a >> b >> c ;
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