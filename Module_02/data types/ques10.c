#include<stdio.h>

int main()

{
    float f;

    double d;

    long double ld;

    scanf("%f%f%f", &f, &d, &ld);

    printf("%.2f\n%.151f\n%.18Lf\n", f,d,ld);

return 0;
}