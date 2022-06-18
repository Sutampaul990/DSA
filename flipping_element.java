//Minimun Group flip to make same......
import java.util.*;
class flipping_element 
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
        flip_element(arr,n);
    }
    static void flip_element(int arr[],int n)
    {
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                if(arr[i]!=arr[0])
                System.out.print("From "+i+" to ");
                else
                System.out.println(i-1);
            }
        }
        if(arr[n-1]!=arr[0])
        System.out.print(n-1);
    }
}
