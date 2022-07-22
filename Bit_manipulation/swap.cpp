#include<iostream>
using namespace std;
void swap(int a,int b)
{
    a^=b;
    b^=a;
    a^=b;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

}
int main()
{
    int a,b;
    cout<<"Enter two numbers for swap : ";
    cin>>a>>b;
    cout<<"After Swapping ----\n";
    swap(a,b);
    return 0;
}