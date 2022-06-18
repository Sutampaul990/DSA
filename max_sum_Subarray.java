import java.util.*;
class max_sum_Subarray
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
        System.out.print("So the Max Sum : "+max_sum(arr,n));
    }
    static int max_sum(int arr[],int n)
    {
        int i=1;
        int maxEnding=arr[0],res=arr[0];
        maxEnding=Math.max(maxEnding+arr[i],arr[i]);
        res=Math.max(res,maxEnding);
        for(int j=1;j<n;j++){
            maxEnding=Math.max(maxEnding+arr[j],arr[j]);
            res=Math.max(maxEnding,res);
        }
        return res;
    }
}