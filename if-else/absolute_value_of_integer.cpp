#include<bits/stdc++.h>
using namespace std;
int main(){
    //Take an input and print the absolute value of that integer
    int a;
    cout<<"Enter a number whose absolute value you want:";
    cin>>a;
    if(a<0){
        cout<<"Absolute value of the number is:"<<-a;
    } 
    else{
        cout<<"Absolute value of the number is:"<<a;
     }
    // if(a<0) a*= -1;
    // cout<<a;                            
    //this method is better bcz we don have to put extra brackets and it certainly 
    //more fast but the last method is more clean and beautifull to the eyes                                            
}