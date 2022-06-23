import java.util.*;
public class queries_prefix_sum 
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
        System.out.print("Enter the Queries number : ");
        int q=sc.nextInt();
        while(q!=0){
            System.out.print("Enter the range : ");
            int l=sc.nextInt(),r=sc.nextInt();
            System.out.println("Enter the results : "+ prefix_sum(arr,n,l,r));
            q--;
        }
    }  
    /*static int prefix_sum(int arr[],int n,int r,int l)
    {
        //int p_s[n];
        //int []p_s=new int[n];
        //p_s[0]=arr[0];
        int sum=0;
        for(int i=r;i<=l;i++){
            //p_s[i]=p_s[i-1]+arr[i];
            sum+=arr[i];
        }
        return sum;
    }     
    */
    static int prefix_sum(int arr[],int n,int l,int r)
    {
        int []p_s=new int[n];
        p_s[0]=arr[0];
        for(int i=1;i<n;i++)
        p_s[i]=p_s[i-1]+arr[i];
        return getSum(p_s,l,r);
    }
    static int getSum(int p_s[],int l,int r)
    {
        if(l!=0)
        return p_s[r]-p_s[l-1];
        else
        return p_s[r];
    }
}
