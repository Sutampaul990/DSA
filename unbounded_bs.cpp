#include<iostream>
using namespace std;
int b_search(int arr[],int target,int low,int high)
{
    int mid=(low+high)/2;
    if(low>high)
    return -1;
    else if(arr[mid]==target)
    return mid+1;
    else if(arr[mid]>target)
    return b_search(arr,low,mid-1,target);
    else
    return b_search(arr,mid+1,high,target);
}

int b_s(int arr[],int x)
{
    if(arr[0]==x)
    return 1;
    int i=1;
    while(arr[i]<x){
        i=i*2;
        if(arr[i]==x)
        return i;
    }
    return b_search(arr,x,i/2+1,i-1);
}

int main()
{
    int n,x;
    cout<<"Enter length of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the value : ";
    cin>>x;
    cout<<b_s(arr,x);
    return 0;
}