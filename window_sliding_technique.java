import java.util.*;
class window_sliding_technique 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of the Array : ");
        int n=sc.nextInt();
        int []arr=new int[n];
        System.out.print("Enter theElements : ");
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        System.out.print("Enter the consecutive number : ");
        int k=sc.nextInt();
        System.out.print("Sum : "+consecutive_sum(arr,n,k));
    }    
    static int consecutive_sum(int arr[],int n,int k)
    {
        int cur_sum=0;
        for(int i=0;i<k;i++)
            cur_sum+=arr[i];
        int res=cur_sum;
        for(int i=k;i<n;i++){
            cur_sum+=(arr[i]-arr[i-k]);
            res=Math.max(cur_sum,res);
        }
        return res;
    }
}
