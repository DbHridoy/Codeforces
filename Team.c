#include<stdio.h>
int main()
{
    int n,i,a[10],j,c,p=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        c=0;
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[j]);

            if(a[j]==1)
                c++;

        }

        if (c>1)
            p++;

    }
    printf("%d\n",p);
}
