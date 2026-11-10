#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take length and breadth of a rectangle as input and write a program to find whether 
    // the area of rectangle is greater than its perimeter
    float l, b;
    cout<<"Enter the length of the rectangle:";
    cin>>l;
    cout<<"Enter the breadth of the rectangle:";
    cin>>b;
    float peri=2*(l+b);
    float area=l*b;
    if(peri>area) cout<<"The perimeter is bigger than the area.";
    else if(peri<area) cout<<"The area is bigger than the perimeter.";
    else  cout<<"The area and perimeter are equal.";

}