
//Give an unsorted Array of non-negative intergers...Find if there is a sub_Array with given sum...


import java.util.*;
public class sub_array_sum_check 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Array length : ");
        int n=sc.nextInt();
        int []arr=new int[n];
        System.out.print("Enter the Elements : ");
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        System.out.print("Enter the sum : ");
        int sum=sc.nextInt();
        System.out.print("Result : "+array_sum_check(arr,n,sum));
    }
    static boolean array_sum_check(int arr[],int n,int sum)
    {
        int cur_sum=arr[0],s=0;
        for(int i=1;i<n;i++){
            while(cur_sum>sum&&s<i-1){
                cur_sum-=arr[s];
                s++;
            }
            if(cur_sum==sum)
            return true;
            else if(i<n)
            cur_sum+=arr[i];
        }
        return (cur_sum==sum);
    }
}
