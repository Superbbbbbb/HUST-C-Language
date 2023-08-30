#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, i, j, a[10];
    unsigned long y, z;
    scanf("%d", &x);
    if(x >= 2 && x <= 79)
    {
        for (y = 1234; y <= 98765; y++)
        {
            a[0] = '\0';
            int k = 1;
            z = x * y;
            if (z >= 1234 && z <= 98765)
			{
            	for (i = 4; i >= 0; i--)
            	{	
                	a[i] = m % 10;
                	m /= 10;
            	}
            	for (i = 9; i >= 5; i--)
            	{
                	a[i] = n % 10;
                	n /= 10;
            	}
            	for (i = 0; i < 9; i++)
            	{
                	for (j = i + 1; j < 10; j++)
                	{
                    	if (a[i] == a[j])
                        	k = 0;
                	}
            	}
            	if (k == 1)
            	{
                	for (i = 5; i < 10; i++)
                	{
                    	printf("%d", a[i]);
                	}
                	printf("/");
                	for (i = 0; i < 5; i++)
                	{
                    	printf("%d", a[i]);
                	}
                	printf("=%d\n", x);
            	}
        	}
    	}
}
    return 0;
}
