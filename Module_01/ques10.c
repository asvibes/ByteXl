#include <stdio.h>

int main()

{

int salary,c;

scanf("%d", &salary);

if (salary>=500000)

{

c=salary*(10.0/100.0);

printf("Tax to be paid:%d",c);

}

else{

printf("No tax");

}

return 0;

}