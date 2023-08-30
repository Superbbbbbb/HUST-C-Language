#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z,i,k,flag1,flag2,flag3;
    printf("本程序判断合数,请输入大于1的整数,以Ctr+2结束\n");
    for(x=100;x<=999;x++)
    {
        y=x/10;
        z=x/100;
        for(i=2,k=x>>1,flag1=0;i<=k;i++)
        {
            if(!(x%i))
            {
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
        for(i=2,k=z>>1,flag3=0;i<=k;i++)
        {
            if(!(z%i))
            {
                flag3=1;
                break;
            }
        }
        if(flag1==1&&flag2==1&&flag3==1)
            printf("%d\t",x);
    }
    return 0;
}
