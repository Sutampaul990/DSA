import java.util.*;
class max_consecutive
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the length of the Array : ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.print("Enter the Elements : ");
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        System.out.print("Max Consecutive length : "+maxcon(arr,n));
    }
    static int maxcon(int arr[],int n)
    {
        int res=0,cur=0;
        for(int i=0;i<n;i++)
            if(arr[i]==0)
                cur=0;
            else{
                cur++;
                res=Math.max(res,cur);
            }
        return res;
    }
}