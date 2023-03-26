#include<stdio.h>
int main()
{
    int arr[20],i=0,j=0,k=0,n;
    int odd[10],even[10];
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
            odd[j++]=arr[i];
        else
            even[k++]=arr[i];
    }
    printf("Odd : \n");
    for(i=0;i<j;i++)
    printf("%d\t",odd[i]);
    printf("\nEven : \n");
    for(i=0;i<k;i++)
    printf("%d\t",even[i]);
    return 0;
}