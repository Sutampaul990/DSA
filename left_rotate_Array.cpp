//Right rotation will be same
#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high)
{
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[],int d)
{
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
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
    cout<<"Enter the Rotation : ";
    cin>>d;
    
    cout<<"After Rotation : \n";
    leftRotate(arr,d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    return 0;
}
