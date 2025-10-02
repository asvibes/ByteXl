#include <stdio.h>

int main()
{

    int a;

    int b;



    scanf("%d %d", &a,&b);

    printf("Without casting: %d/%d %.2f\n", a, b, (float) (a/b)); printf("With casting: %d/%d%.2f", a, b, (float)a/b);

return 0;
}