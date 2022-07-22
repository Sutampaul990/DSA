#include<iostream>
using namespace std;
int xor_all(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter nth number : ";
    cin>>n;
    cout<<"Result : "<<xor_all(n);
    return 0;
}