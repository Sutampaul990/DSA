#include<iostream>
using namespace std;
int getWater(int arr[],int n)
{
    int lMax[n],rMax[n],res=0;
    lMax[0]=arr[0];
    for(int i=1;i<n;i++)
    lMax[i]=max(arr[i],lMax[i-1]);
    rMax[n-1]=arr[n-1];
    for(int i=2;i>0;i--)
    rMax[i]=max(arr[i],rMax[i+1]);
    for(int i=1;i<n-1;i++)
    res=res+(min(lMax[i],rMax[i])-arr[i]);
    return res;
}

int main()
{
    int n;
    cout<<"Enter the length of the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    cout<<"Result : "<<getWater(arr,n);
    return 0;
}