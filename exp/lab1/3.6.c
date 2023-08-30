#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,x=2,flag;
    long m;
    scanf("%d",&m);
    if(m>3)
    {
        for(i=2,k=0;(x*2-1)<=m;i++)
        {
            x*=2;
            k=(x-1) >>1;
            for(j=2,flag=0;j<=k;j++)
            {
                if((x-1)%j==0)
                    flag+=1;
            }
            if(flag==0)
                printf("M(%d)=%d\n",i,x-1);
        }
    }
    else printf("错误");
    return 0;
}
