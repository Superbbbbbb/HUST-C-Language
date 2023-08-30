#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,max;
    scanf("%d",&n);
    int a[n];
    int b[n-1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        b[i]=abs(a[i+1]-a[i]);
    }
    for(i=0,max=b[0];i<n-2;i++)
    {
        if(b[i]<b[i+1])
            max=b[i+1];
    }
    printf("%d",max);
    return 0;
}
