#include <stdio.h>

int main()

{

int y;

scanf("%d",&y);

    if ((y%400==0)||(y%4==0 && y%100!=0))
        printf("%d is a Leap Year",y);

    else
        printf("%d is Not a Leap Year",y);
return 0;

}