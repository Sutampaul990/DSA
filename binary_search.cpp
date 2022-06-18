#include<iostream>
using namespace std;
int b_search(int arr[],int low,int high,int target)
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
int main()
{
    int n,target,res;
    cout<<"Enter length of Array : ";
    cin>>n;
    int low=0,high=n-1;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the Searching element : ";
    cin>>target;
    res=b_search(arr,low,high,target);
    cout<<"Search result : "<<res<<endl;
    return 0;
}