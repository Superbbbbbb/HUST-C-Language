#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,a[11][11],k;
    for(i=1;i<11;i++)
    {
        for(j=1;j<=i;j++)
            if(j==1||i==j)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for(i=1;i<11;i++)
    {
        for(k=1;k<=10-i;k++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}
