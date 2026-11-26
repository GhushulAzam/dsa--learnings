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
    if(a>b and a>c){
        cout<<"the largest is:"<<a;
    }
    else if(b>a and b>c){
        cout<<"the largest is:"<<b;
    }
    else{
        cout<<"the largest is:"<<c;
    }

}
