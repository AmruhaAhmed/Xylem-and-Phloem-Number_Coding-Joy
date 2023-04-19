import java.util.*;
class XylemandPhloemNumber
{
    public static void main(String []args)
    {
        Scanner ob=new Scanner(System.in);
        int n;//accepted number
        int a[]=new int[20];//array to store digits of n
        int i=0;//index of array a[]
        int ctr;//count of digits
        int j;//loop counter
        int s1=0,s2=0;// s1- sum of extreme digits,s2=sum of digits in middle
        int t;//dummy variable
        System.out.print("Enter a number:");
        n=ob.nextInt();
        t=n;
        while(n!=0)
        {
            int rem=n%10;
            a[i++]=rem;
            n=n/10;
        }
        ctr=i;
        s1=a[ctr-1]+a[0];
        for(j=1;j<ctr-1;j++)
        s2=s2+a[j];
        if(s1==s2)
        System.out.println(t+" is a Xylem Number");
        else
        System.out.println(t+" is a Phloem Number");
            
    }
}
