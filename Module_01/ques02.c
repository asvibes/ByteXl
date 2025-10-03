#include <stdio.h>

int main()

{

float a, b, c;

scanf("%f", &a);

scanf("%f", &b);

c = a;

a = b;

b = c;

printf("%.2f\n",a);

printf("%.2f",b);

return 0;

}
