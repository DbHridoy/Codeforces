#include<stdio.h>
int main()
{
    long int n,k,i,a[50],count=0;
    scanf("%ld%ld",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%ld",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        if(a[i]>0&&a[i]>=a[k-1])
        {
            count++;
        }
    }
    printf("%ld\n",count);
}
