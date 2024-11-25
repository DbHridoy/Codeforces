#include<stdio.h>
int main()
{
    long long int n,m,a,b,c;
    scanf("%I64d%I64d%I64d",&n,&m,&a);
    b=n/a;
    n=n%a;
    c=m/a;
    m=m%a;
    if(n!=0)
    {
        b++;
    }
    if(m!=0)
    {
        c++;
    }
    a=b*c;
    printf("%I64d",a);

}
