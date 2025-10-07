#include <stdio.h>

int main()

{

int a,b,min;

    scanf("%d%d", &a,&b);

    min=(a<b)?a:b;

    printf("The smaller number is: %d\n", min);

    printf("a = %d, ",a);

    printf(" b = %d",b);

    return 0;

}