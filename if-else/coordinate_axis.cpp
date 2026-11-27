// Given a point (x,y), write a program to find out if it lies in 1st quadrant, 2nd quadrant, 
//   3rd quadrant,  4th quadrant, on the x-axis, y-axis or at the origin.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the x coordinate:";
    cin>> x;
    cout<<"Enter the y coordinate:";
    cin>> y;
    if(x==0 and y == 0) cout<<"The point lie on the origin.";
    else if(x==0 and y!=0) cout<<"The point lie on the x axis";
    else if(x!=0 and y==0) cout<< "The point lie on the y axis";
    else if(x>0 and y>0) cout<<"The point lie on the 1st quadrant";    
    else if(x>0 and y<0) cout<<"The point lie on the 4th quadrant"; 
    else if(x<0 and y>0) cout<<"The point lie on the 2nd quadrant"; 
    else cout<<"The point lie on the 3rd quadrant"; 
}