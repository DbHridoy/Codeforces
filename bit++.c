#include<stdio.h>
int main()
{
    int x=0,i,n;
    char a[10];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",a);
        if(a[2]=='+')
        {
            x++;
        }
        else if(a[2]=='-')
        {
            x--;
        }
        else if(a[0]=='-')
        {
            --x;
        }
        else if(a[0]=='+')
        {
            ++x;
        }
    }
    printf("%d\n",x);
}
