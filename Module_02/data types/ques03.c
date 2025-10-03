#include<stdio.h>

int main()

{

float s;

scanf("%f", &s);

printf("%f cm\n",s*s);

printf("%.61f cm", (double)s*(double)s);

return 0;

}