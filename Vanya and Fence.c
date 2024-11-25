#include<stdio.h>

int main()
{
    long int n,h;
    scanf("%ld%ld",&n,&h);
    long int a[n],i,m;

    m=n;
    for(i=0; i<n; i++) {
        scanf("%ld",&a[i]);
        if(a[i]>h) {
            m++;
        }
    }
    printf("%ld\n",m);

    return 0;
}
