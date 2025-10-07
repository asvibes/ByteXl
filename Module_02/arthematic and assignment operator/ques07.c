#include <stdio.h>

int main()

{

int a,b,c,d,e,f;

scanf("%d",&a);

b = a%  10;

c = a / 10;

d = c %  10;

e = a / 100;

printf("%d", b*100+d*10+e*1);

return 0;
}