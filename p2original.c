#include <stdio.h>
int input()
{
  int a;
  printf("Enter two numbers\n");
  scanf("%d", &a);
  return a;
}
int add(int a, int b)
{
  int c;
  c = a + b;
  return c;
}
void output(int a, int b, int c)
{
  printf("Sum of %d and %d is %d",a,b,c);
}

int main(){
  int x,y,z;
  x = input();
  y = input();
  z = add(x,y);
  output(x,y,z);
  return 0;
}
