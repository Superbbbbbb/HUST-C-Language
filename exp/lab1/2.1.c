#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, x, k, flag=0;
    printf("本程序判断合数,请输入大于1的整数,以Ctr+2结束\n");
    while(scanf("%d",&x)!=EOF){
        for(i=2,k=x>>1,flag=0;i<=k;i++)
        {
            if(!(x%i))
                flag+=1;
        }
        if(flag>=1)
            printf("%d是合数\n",x);
        else printf("%d不是合数\n",x);
    }
    return 0;
}
