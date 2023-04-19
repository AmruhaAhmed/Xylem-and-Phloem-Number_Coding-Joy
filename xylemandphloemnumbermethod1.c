#include<stdio.h>
void main()
{
                                
    int n;//accepted number
    int a[20];//array to store digits of n
    int i=0;//index of array a[]
    int ctr;//count of digits
    int j;//loop counter
    int s1=0,s2=0;// s1- sum of extreme digits,s2=sum of digits in middle
    int t;//dummy variable
    printf("Enter a number:");
    scanf("%d",&n);
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
    printf("%d is a Xylem Number",t);
    else
    printf("%d is a Phloem Number",t);
                        
                        
 }