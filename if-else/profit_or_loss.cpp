#include<bits/stdc++.h>
using namespace std;
int main(){
    //If cost price and selling price of an item is input through keyboard,
    //write a program to determine whether the seller has made profit or incurred loss
    //or no profit no loss. Also determine how much profit he made or loss he incurred.
    int cost, sell;
    cout<<"Enter the cost price:";
    cin>>cost;
    cout<<"Enter the selling price:";
    cin>>sell;
    int profit = sell - cost;
    if(profit>0) cout<<"The seller made a profit of:"<<profit;
    else if (profit<0) cout<<"The seller made a loss of:"<<profit*-1;
    else cout<<"The seller made neither a loss not profit";
}