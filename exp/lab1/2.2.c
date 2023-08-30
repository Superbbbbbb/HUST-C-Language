#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,x,k,flag;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+z结束\n");
    while(scanf("%d",&x)!=EOF){
        k=x>>1;
        i=2;
        flag=0;
        do{
            if(!(x%i))
                flag=1;
            i++;
        }while(i<=k);
        if(x==2) printf("2不是合数\n");
        else if(flag==1) printf("%d是合数\n",x);
        else printf("%d不是合数\n",x);
    }
    return 0;
}
