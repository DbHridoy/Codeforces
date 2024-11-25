#include<stdio.h>
int main()
{
    int a[6][6],b,c,i,j;
    for(i=1; i<6; i++) {
        for(j=1; j<6; j++) {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1) {
                if(i<3)
                    b=3-i;
                else
                    b=i-3;
                if(j<3)
                    c=3-j;
                else
                    c=j-3;
            }
        }
    }
    printf("%d\n",b+c);
}
