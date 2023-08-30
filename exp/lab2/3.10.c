#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,k=1,row,line;
    scanf("%d",&n);									/*输入阶数n*/
    int a[n][n];
    for(i=0,j=0;k<=n*n;i++,j++)
	{
		for(row=j;row<n-j;row++,k++)
			a[i][row]=k;							/*第i+1层上行赋值*/
		for(line=i+1;line<n-i;line++,k++)
			a[line][n-j-1]=k;						/*第i+1层右行赋值*/
		for(row=n-j-2;row>=j;row--,k++)
			a[n-i-1][row]=k;						/*第i+1层下行赋值*/
		for(line=n-i-2;line>=i+1;line--,k++)
			a[line][j]=k;							/*第i+1层左行赋值*/
	}
	if(n%2!=0)						/*假如是n为奇数,最中心的一个数要赋值*/
		a[(n+1)/2][(n+1)/2]=n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);					/*输出方阵*/
            if(j!=n-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
