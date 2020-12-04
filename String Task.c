#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i,b;
    b= strlen(a);
    for(i=0; i<b; i++)
    {
        if(a[i]>=65 && a[i]<=96)
        {
            a[i]=a[i]+32;
        }
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
        {
            printf(".%c",a[i]);
        }

    }
}
