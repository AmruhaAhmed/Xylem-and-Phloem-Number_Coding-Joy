#include<stdio.h>
main()
{
    int n;//accepted number
    int s1=0;//sum of extreme digits
    int s2=0;//sum of middle digits 
    int d;//dummy variable
    printf("Enter a number:");
    scanf("%d",&n);
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
    printf("%d is a Xylem Number",d);
    else
    printf("%d is a Phloem Number",d);

}