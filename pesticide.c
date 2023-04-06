#include<stdio.h>
int main()
{
    int arr[]={6,5,8,4,7,10,9};
    int n=7;
    
    int os=0;
        int s=n;
        int day=0;
        int c=1;
        while(os!=s)
        {
            for(int j=1;j<s;j++)
            {
                if(arr[j]<=arr[j-1])
                {
                    arr[c]=arr[j];
                    c++;
                }
            }
            os=s;
            s=c;
            c=1;
            day++;
        }
        printf("%d",day-1);
    return 0;
}