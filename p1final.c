#include <stdio.h>
void input(int *a,int *b)
{
  printf("enter the value\n");
  scanf("%d",&*a);
  printf("enter the value\n");
  scanf("%d",&*b);
}
void add(int a, int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("result is\n%d + %d = %d",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
  }