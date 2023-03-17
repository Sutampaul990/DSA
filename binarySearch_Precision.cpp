#include <bits/stdc++.h> 
using namespace std;
long long int sqrtN(long long int n)
{
        unsigned long long int s = 0;
        unsigned long long int e = n;
        unsigned long long int mid = s + (e-s)/2;
        
        unsigned long long int ans = 0;
        while(s<=e) {
            
            unsigned long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                s = mid+1;
                ans = mid;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
}
double morePrecision(int n , int precision, int tempsol)
{
    double ans = tempsol;
    double factor =1;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j+=factor){
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n,precision,tempsol;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the precision : ";
    cin>>precision;
    tempsol = sqrtN(n);
    cout<<"Answer : "<<morePrecision(n,precision,tempsol)<<endl;
    return 0;
}
