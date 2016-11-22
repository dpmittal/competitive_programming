//https://www.codechef.com/problems/HEADBOB/
import java.io.*;
class HEADBOB
{
    public static int count(char a , String b)
    {
        int c = 0;
       for(int i=0;i<b.length();i++)
       {
           if(b.charAt(i)==a)
           c++;
        }
        return c;
    }
    public static void main(String args[])throws IOException
    {
        int itr ;
        String a ;
        DataInputStream ds = new DataInputStream(System.in);
        itr = Integer.parseInt(ds.readLine());
        for(int i=0;i<itr;i++)
        {
            int b = Integer.parseInt(ds.readLine());
            a = ds.readLine();
            int ind = count('I',a);
            int n = count('N',a);
            int y = count('Y',a);
            if(n==b) {
                System.out.println("NOT SURE");
                continue;
            }
            else
            {
                if(ind>0 && y==0)
                System.out.println("INDIAN");
                else if(y>0 && ind==0)
                System.out.println("NOT INDIAN");
                else
                System.out.println("NOT SURE");
            }
        }
    }
}
