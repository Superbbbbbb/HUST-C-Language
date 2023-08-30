#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, i, j, k, x;
    scanf("%d%d", &m, &n);							/*输入m,n*/
    int a[1000];
    x = m;											/*人数储存到x中*/
    for (i = 0; i < m; i++)
        a[i] = i + 1;
    i = 1;											/*i赋值为1*/
    while (x > 1)
    {
        for (j = 0; j < m; j++)
        {
            if (a[j] != '\0')                   	/*如果j+1未出局*/
            {
                if (i % n == 0)						/*如果i整除n*/
                {
                    a[j] = '\0';                /*第j+1个人出局*/
                    x--;						/*人数减1*/
                }
                i++;							/*i加1*/
            }
            else
                continue;						/*如果已出局则跳过*/
        }
    }
for (i = 0; i < m; i++)
    {
        if (a[i] != 0)
            printf("%d", a[i]);
    }
    return 0;
}
