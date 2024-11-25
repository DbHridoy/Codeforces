#include<stdio.h>

int main()
{
    char s[100];
    int a,n,i=0;
    scanf("%d",&n);
    for(;i<n;i++){
        scanf("%s",s);
        a= strlen(s);
        if(a>10)
        {
            printf("%c%d%c\n",s[0],a-2,s[a-1]);
        }
        else
        {
            printf("%s\n",s);
        }
    }

}
