import java.util.*;
class generate_subset 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the set : ");
        String s=sc.nextLine();//read String
        String cur=" ";
        int i=0;
        subSet(s,cur,i);
    }
    static void subSet(String s,String cur,int i)
    {
        if(i==s.length()){
            System.out.println(cur);
            return;
        }
        subSet(s,cur,i+1);
        subSet(s,cur+s.charAt(i),i+1);
    }
}
