#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[10][10], b[10][10], m, n;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);				   /*输入二维数组a*/
            b[i][j] = a[i][j];					   /*将a储存到二维数组b*/
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n - 2; j++)
        {													 /*如果同行3个
            if(a[i][j] == a[i][j+1]&&a[i][j+1]==a[i][j+2])	   数连续相等*/
                b[i][j] = b[i][j + 1] = b[i][j + 2] = 0;	 /*全部消为0*/
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m - 2; i++)
        {													 /*如果同行3个
            if(a[i][j] == a[i+1][j] && a[i+1][j]==a[i+2][j])   数连续相等*/
                b[i][j] = b[i + 1][j] = b[i + 2][j] = 0;	 /*全部消为0*/
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", b[i][j]);							 /*输出数组b*/
            if(j!=n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
