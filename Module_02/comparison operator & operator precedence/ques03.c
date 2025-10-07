#include <stdio.h>

int main()

{

int a, b, large;

scanf("%d%d", &a,&b);

if(a>b)
printf("The largest number is %d\nThe smallest number is %d",a,b);

else if (b>a)
 printf("The largest number is %d\nThe smallest number is %d", b,a);

else
    printf("Both numbers are equal"); 
return 0;

}