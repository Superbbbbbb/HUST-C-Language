#include <stdio.h>
#include <stdlib.h>
int main()
{
    long m,x,y;
    int i,k,flag1,flag2;
    scanf("%d",&m);
    while(m>=4&&m<=1000000){
        for(x=2;x<m;x++)
        {
            y=x+2;
            for(i=2,k=x>>1,flag1=0;i<=k;i++)
            {
                if(!(x%i)){
                    flag1=1;
                    break;
                }
            }
            for(i=2,k=y>>1,flag2=0;i<=k;i++)
            {
                if(!(y%i))
                {
                    flag2=1;
                    break;
                }
            }
            if(flag1==0&&flag2==0)
                printf("(%d,%d)\n",x,y);
        }
        break;
    }
    return 0;
}
