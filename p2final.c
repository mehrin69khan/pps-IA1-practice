#include<stdio.h>
int input(int *a,int *b,int *c)
{
  printf("enter 3 number\n");
  scanf("%d%d%d" , a,b,c);
}
int cmp(int a,int b,int c,int *big)
{
  if((a>b)&&(a>c))
  *big=a;
  else if((b>a)&&(b>c))
  *big+b;
  else
  *big=c;
}
int output(int big)
{
  printf("biggest number is %d", big);
}
int main()
{
  int x,y,z,big;
  input (&x,&y,&z);
  cmp(x,y,z,&big);
  output(big);
}