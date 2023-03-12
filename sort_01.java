/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        //programme for 0-1 sort with two pointer
        int left,right;
        right = n-1;
        left = 0;
        while(left<right){
            if(arr[left]==1&&arr[right]==0)
            {
                int temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
                left++;
                right--;
            }
            else if(arr[left]==0&&left<right)
            left++;
            else if(arr[right]==1&&left<right)
            right--;
            else if(arr[left]==0 && arr[right]==1)
            {
                left++;
                right--;
            }
            
        }
        printArray(arr);
    }
    static void printArray(int arr[])
    {
        int n = arr.length;
        for(int i=0;i<n;i++)
        System.out.print(arr[i]);
    }
}
