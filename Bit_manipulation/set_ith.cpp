#include<bits/stdc++.h>
using namespace std;

bool isSetting(int n,int i)
{
    int mask=(1<<i);
    return n=n||mask;
}
int main()
{
    int n,pos;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<"Enter the ith position : ";
    cin>>pos;
    cout<<isSetting(n,pos-1);
    return 0;
}