import java.util.*;
class max_consecutive_1s
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
        System.out.print("So the result : "+max_1s(arr,n));
    }
    static int max_1s(int arr[],int n)
    {
        int cur=0,res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            cur=0;
            else{
                cur++;
                res=Math.max(res,cur);
            }
        }
        return res;
    }
}