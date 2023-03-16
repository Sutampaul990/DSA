#include<bits/stdc++.h>
using namespace std;
int First_occurences(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high)
    {
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;

        mid=low+(high-low)/2;
    }
    return ans;
}
int Last_occurences(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high)
    {
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;

        mid=low+(high-low)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    cout<<First_occurences(arr,n,key)<<endl;
    cout<<Last_occurences(arr,n,key)<<endl;;
    return 0;
}
//CodeSudio Problem----->

/*
#include <bits/stdc++.h> 
int First_occurences(vector<int>& arr,int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high)
    {
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;

        mid=low+(high-low)/2;
    }
    return ans;
}
int Last_occurences(vector<int>& arr,int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high)
    {
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>key)
            high=mid-1;
        else
            low=mid+1;

        mid=low+(high-low)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first = First_occurences(arr,n,k);
    p.second = Last_occurences(arr,n,k);
    return p;
}
*/