#include <stdio.h>
int main()
{
  int a,b,s;
  scanf("%d%d",&a,&b);
  s=a+b;
  if(s%a==0 && s%b==0)
  printf("Sum: %d, Div by %d: Yes, Div by %d: Yes",s,a,b);
  else if(s%a!=0 && s%b!=0)
  printf("Sum: %d, Div by %d: No, Div by %d: No",s,a,b);
  else if(s%a!=0 && s%b==0)
  printf("Sum: %d, Div by %d: No, Div by %d: Yes",s,a,b);
  else if(s%a==0 && s%b!=0)
  printf("Sum: %d, Div by %d: Yes, Div by %d: No",s,a,b);
  return 0;
}