//MAximun Diiference when larger elements appears after the smaller element-----
#include<iostream>
using namespace std;
int diff(int arr[],int n)
{
    int min_val=arr[0];
    int res=arr[1]-arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-min_val);
        min_val=min(min_val,arr[j]);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the length of the Array : ";
    cin>>n;
    int arr[n],d;
    cout<<"Enter the Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"So the Max difference : "<<diff(arr,n)<<endl;
    return 0;
}