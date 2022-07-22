#include<iostream>
using namespace std;
bool isPowerOfTwo(int x)
{
    return x & (!(x & (x - 1)));
}
int main()
{
    int n;
    cout<<"Enter any number : ";;
    cin>>n;
    cout<<"Power of 2 : "<<isPowerOfTwo(n)<<endl;
    return 0;
}