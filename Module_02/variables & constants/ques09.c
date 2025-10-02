#include <stdio.h>
void display()
{
  int a=100;
  printf("Function value: %d",a);
}

int main()
{
  int a;
  scanf("%d",&a);
  printf("Main value: %d\n",a);
  display();
  return 0;
}