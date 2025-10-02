#include <stdio.h>
int main()
{
  int a;
  float b;
  char c;
  double d;
  scanf("%d %f %c %lf",&a,&b,&c,&d);
  printf("Integer value: %d\nFloat value: %.2f\nCharacter value: %c\nDouble value: %.6lf",a,b,c,d);
  return 0;
}
