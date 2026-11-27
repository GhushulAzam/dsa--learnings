#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first no:";
    cin>> a;
    cout<<"Enter the second no:";
    cin>> b;
    cout<<"Enter the third no:";
    cin>> c;
    if(a>c){
        if(b>c) cout<<"Smallest no is"<<c;
        else cout<<"Smallest no is"<<b;}
    else if(a<c){
        if(b>a) cout<<"Smallest no is"<<a;
        else cout<<"Smallest no is"<<b;}
    else {cout<<"Smallest no is:"<<c;}      
}