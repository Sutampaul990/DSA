import java.util.*;
class tower_of_Hanoi
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the Number of Disc : ");
        int n=sc.nextInt();
        
        TOH(n,'A','B','C');
    }
    static void TOH(int n,char A,char B,char C){
        if(n==1){
            System.out.println("Move 1 from "+A+" to "+C);
            return;
        }
        TOH(n-1,A,C,B);
        System.out.println("Move "+n+" from "+A+" to "+C);
        TOH(n-1,B,A,C);
    }
}