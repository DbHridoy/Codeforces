#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c;
    scanf("%s%s",a,b);
    c=strcasecmp(a,b);
    if(c<0)
    {
        printf("-1");
    }
    else if(c>0)
    {
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
