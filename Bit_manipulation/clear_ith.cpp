#include<bits/stdc++.h>
using namespace std;
int isClear(int n,int i)
{
    int musk=(1<<i);
    return n&&(!musk);
}
int main()
{
    int n,pos;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<"Enter the ith position : ";
    cin>>pos;
    cout<<isClear(n,pos-1);
    return 0;
}