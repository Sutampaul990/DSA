#include<stdio.h>

int fibo(int n)
{
    if (n==0 || n==1)
    return 0;
    return (fibo(n-1)+fibo(n-2));
}

int main()
{
    int n;
    printf("Enter the last term of the series : ");
    scanf("%d",&n);
    printf("So the Result : \n");
    for(int i=0;i<n;i++)
    printf("%d\t",fibo(i));
    return 0;
}