#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if (a == 0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers of G.C.D : ";
    cin>>a>>b;
    int m=gcd(a,b);
    cout<<"G.C.D of "<<a<<" and "<<b<<" : "<<m;
    //L.C.M
    cout<<"\nL.C.M of "<<a<<" and "<<b<<" : "<<(a*b)/m;
    return 0;
}