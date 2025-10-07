#include <stdio.h>

int main()
{

int n, i, j;
if (scanf("%d", &n) != 1) return 0;

for (i = 1; i <= n; ++i)
{

    for (j = 1; j <= i; ++j)
    {
         if (j > 1) putchar(' '); printf("%d", j);
    }
    putchar('\n');

}

return 0;

}