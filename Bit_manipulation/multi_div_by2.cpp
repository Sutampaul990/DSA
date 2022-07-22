#include<iostream>
using namespace std;
int multi(int x,int y)
{
    return x<<y;
}
int divi(int x,int y)
{
    return x>>y;
}

int main()
{
    int x,y;
    cout<<"Enter any number : ";
    cin>>x;
    cout<<"Enter the power of 2 : ";
    cin>>y;
    cout<<"so after multiplication : "<<multi(x,y);
    cout<<"\nso after Division : "<<divi(x,y);
    return 0;
}