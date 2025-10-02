#include <stdio.h>
#define SECONDS_IN_MINUTE 60 
int main()
{
  int a,c;
  scanf("%d",&a);
  c=a*SECONDS_IN_MINUTE;
  printf("%d seconds",c);
  return 0;
}