#include <stdio.h>

int main()

{



int a,b,c;

scanf("%d%d", &a,&b);

    c = (a-b)*(a*a)+(a++)-(--b)+(b*b);

    printf("%d",c);

return 0;
}