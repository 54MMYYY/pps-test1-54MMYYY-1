#include <stdio.h>
void input(int *a,int *b,int *c)
{
  printf("Enter the values of a,b,c\n");
  scanf("%d%d%d",a,b,c);
}
void com(int a,int b, int c, int *big)
{
  if(a>b && a>c)
  {
    *big=a;
  }
  else if(b>c)
  {
    *big=b;
  }
  else
  {
    *big=c;
  }
}
void output(int big)
{
  printf("The biggest number = %d", big); 
}
int main()
{
  int a,b,c,big;
  input(&a,&b,&c);
  com(a,b,c,&big);
  output(big);
  return 0;
}