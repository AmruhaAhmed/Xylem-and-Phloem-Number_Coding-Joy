import java.util.*;
                        class XylemandPhloemNumber{
                        
                            public static void main(String []args)
                            {
                                Scanner ob=new Scanner(System.in);
                                int n;//accepted number
                                int s1=0;//sum of extreme digits
                                int s2=0;//sum of middle digits 
                                int d;//dummy variable
                                System.out.print("Enter a number:");
                                n=ob.nextInt();
                                d=n;
                                s1=n%10;
                                n=n/10;
                                while(n>9)
                                {
                                    s2=s2+n%10;
                                    n=n/10;
                                }
                                s1=s1+n;
                                if(s1==s2)
                                System.out.println(d+" is a Xylem Number");
                                else
                                System.out.println(d+" is a Phloem Number");
                             }
                        }
                        