#include<iostream>
using namespace std;
void frequency(int arr[],int n)
{
    int freq=1,i=1;
    cout<<"Result : \n";
    while(i<n){
        while(arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        freq=1;//Reseting
        i++;
    }
    if(n==1||arr[n-1]!=arr[n-2])
    cout<<arr[i-1]<<" "<<"1"<<endl;
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
    frequency(arr,n);
    return 0;
}