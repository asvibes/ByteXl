#include <stdio.h>

#define Pi 3.14159

int main()
{

float radius, vol, frac, rad;

scanf("%f",&radius);

frac = 4.0/3.0;

rad=radius*radius*radius;

vol=frac*rad*Pi;

printf("%.2f", vol);

return 0;

}