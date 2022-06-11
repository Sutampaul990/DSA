#include<iostream>
using namespace std;
int JOS(int n,int k)
{
    if(n==1)
        return 0;
    return(JOS(n-1,k)+k)%n;    
}
int main()
{
    int n,k;
    cout<<"Enter number of people in the Table : ";
    cin>>n;
    cout<<"Enter rotation : ";
    cin>>k;
    
    int temp=JOS(n,k)+1;
    cout<<"Position of the Alive person : "<<temp<<endl;
    return 0;
}

