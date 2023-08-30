#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x<1000)
        y=0;
    else if(x>=1000&&x<2000)
        y=0.05*(x-1000);
    else if(x>=2000&&x<3000)
        y=0.05*1000+0.1*(x-2000);
    else if(x>=3000&&x<4000)
        y=(0.05+0.1)*1000+0.15*(x-3000);
    else if(x>=4000&&x<5000)
        y=(0.05+0.1+0.15)*1000+0.2*(x-4000);
    else
        y=(0.05+0.1+0.15+0.2)*1000+0.25*(x-5000);
    printf("%d",y);
    return 0;
}
