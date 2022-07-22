#include<iostream>
using namespace std;
int odd_occur(int a[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    res^=a[i];
    return res;
}
int main()
{
    int n;
    cout<<"Enter the length of Array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    printf("So the result : %d",odd_occur(a,n));
    return 0;
}