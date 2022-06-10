//Maximum number of smaller rope can be taken from a big rope
import java.util.*;
class rope_cutting 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Total length of the Rope : ");
        int n=sc.nextInt();
        System.out.print("Enter length of three rope pieces : ");
        int a=sc.nextInt(),b=sc.nextInt(),c=sc.nextInt();
        int temp=maxPieces(n,a,b,c);
        System.out.println("So the max pieces : "+temp);

    }
    static int maxPieces(int n,int a,int b,int c)
    {
        if(n==0)    
            return 0;
        if(n<0)
            return -1;
        int res=Math.max(maxPieces(n-a,a,b,c),Math.max(maxPieces(n-b,a,b,c),maxPieces(n-c,a,b,c)));
        if(res==-1)
            return 0;
        return res+1;
    }
}
