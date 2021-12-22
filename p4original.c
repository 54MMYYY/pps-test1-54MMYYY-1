#include <stdio.h>
int main()
{
  int a,b,c,big;
  printf("Enter the values of a,b,c\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  {
    big=a;
  }
  else if(b>c)
  {
    big=b;
  }
  else
  {
    big=c;
  }
  printf("The biggest number = %d", big);
  return 0;
}