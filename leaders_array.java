//An element is called leader when it is greater than all the elements to it's right side
import java.util.*;
class leaders_array 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of the Element : ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.print("Enter the Elements : ");
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        System.out.print("So the leader Element in this Array : ");
        leaders(arr, n);
    }
    static void leaders(int arr[],int n)
    {
        int cur_ldr=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(cur_ldr<arr[i])
            cur_ldr=arr[i];    
        }
        System.out.println(cur_ldr);
    }
}
