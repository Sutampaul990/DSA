#include<stdio.h>
//Time Complexity of the Below method O(n) & Space Complexity O(1)
int fibo(int num)
{
    if(num==0||num==1)
    return num;
    int a=0,b=1,c;
    for(int i=1;i<num;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
/*int fibo(int n)
{
    if(n==0||n==1)
    return n;
    return (fibo(n-1)+fibo(n-2));
}*/
int main()
{
    int n;
    printf("Enter the nth term of the Fibonacci Series : ");
    scanf("%d",&n);
    printf("Here the Series -----\n");
    for(int i=0;i<n;i++){
        printf("%d\t",fibo(i));
    }
    return 0;
}