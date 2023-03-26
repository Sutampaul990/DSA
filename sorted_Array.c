#include<stdio.h>
int main()
{
    int n,m,i,j;
    int arr[20];
//  1st Array
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
//  2nd Array
    printf("Enter the size : ");
    scanf("%d",&m);
    printf("Enter the elements : ");
    for(i=n;i<m+n;i++)
        scanf("%d",&arr[i]);

//  Decending order sorting----
    for(j=0;j<n+m;j++)
    {
        for(i=j+1;i<n+m;i++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Output : \n");
    for(j=0;j<n+m;j++)
    printf("%d\t",arr[j]);

    return 0;
}