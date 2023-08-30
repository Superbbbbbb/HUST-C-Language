#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,i,a[32]={0};							/*定义数组a全为0*/
    scanf("%d",&n);
    if(n>=0)										/*若n为非负数*/
    {
        for(i=0;i<32;i++)
        {
            a[i]=n%2;						/*除以2取余二进制存入数组a*/
            n/=2;
        }
        for(i=31;i>=0;i--){
            printf("%d",a[i]);
            if(i%4==0)
                printf(" ");
        }
    }
    else											/*若n为负数*/
    {
        m=-n-1;										/*取补码*/
        for(i=0;i<32;i++)
        {
            a[i]=m%2;
            m/=2;
        }
        for(i=0;i<32;i++)
        {
            if(i==31)
                a[i]=1;								/*首位为1表示负数*/
            else if(a[i]==0)						/*各位取反*/
                a[i]=1;
            else a[i]=0;
        }
        for(i=31;i>=0;i--)
        {
            printf("%d",a[i]);						/*输出二进制码*/
            if(i%4==0&&i>0)
                printf(" ");
        }
    }
    return 0;
}
