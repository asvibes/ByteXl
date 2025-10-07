#include <stdio.h>

int main()

{

int a, b, large;

scanf("%d%d",&a,&b);

large=(a>b)?a:b;

printf("%d\n",large);

printf("a = %d, ",a);

printf(" b = %d",b);

return 0;

}