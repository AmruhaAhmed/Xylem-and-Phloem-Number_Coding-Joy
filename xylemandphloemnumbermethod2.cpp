#include<iostream>
using namespace std;
int main()
{
    int n;//accepted number
    int s1=0;//sum of extreme digits
    int s2=0;//sum of middle digits 
    int d;//dummy variable
    cout<<"Enter a number:";
    cin>>n;
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
    cout<<endl<<d<<" is a Xylem Number";
    else
    cout<<endl<<d<<" is a Phloem Number";
    return 0;
}