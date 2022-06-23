import java.util.*;
class equilibrium_point 
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
        System.out.print("So the result : "+equili(arr,n));
    }
    /*static boolean equili(int arr[],int n)
    {
        int lsum=0;
        int sum=0;
        for(int i=0;i<n;i++)                    // it is without Index...
        sum+=arr[i];
        for(int i=0;i<n;i++){
            
            if(lsum==sum-arr[i])
            return true;
            lsum+=arr[i];
            sum-=arr[i];
        }
        return false;
    }*/
    static int equili(int arr[],int n)
    {
        int sum=0; 
        int lsum=0; 
        for (int i=0;i<n;i++)
            sum+=arr[i];
        for (int i=0;i<n;i++) {
            sum-=arr[i]; 
            if (lsum==sum)
                return i+1;
            lsum+=arr[i];
        }
        return -1;
    }
}
