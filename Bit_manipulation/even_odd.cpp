#include<bits/stdc++.h>
using namespace std;
int isEvenOdd(int n)
{
    return n&1;//if 1 then odd if 0 then even
}
int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<isEvenOdd(n);
    return 0;
}