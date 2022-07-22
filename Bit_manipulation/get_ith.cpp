#include<bits/stdc++.h>
using namespace std;

bool isSetbit(int n,int i)//Set the ith bit......
{
    int mask=(1<<i);
    return n&mask;
}
int main()
{
    int n,pos;
    cout<<"Enter any number : ";
    cin>>n;
    
    cout<<"Enter the positon of i : ";
    cin>>pos;
    cout<<isSetbit(n,pos-1);
    return 0;
}