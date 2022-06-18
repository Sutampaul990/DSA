//Max length Even-odd Sub-Array(Alternating even-odd sub-array)
#include<iostream>
using namespace std;
int sub_array(int arr[],int n)
{
    int res=1,cur=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0)){
            cur++;
            res=max(cur,res);
        }
        else
        cur=1;
    }
    return res;
}
int main()
{
    int n,target,res;
    cout<<"Enter length of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    res=sub_array(arr,n);
    cout<<"Search Result : "<<res<<endl;
    return 0;
}