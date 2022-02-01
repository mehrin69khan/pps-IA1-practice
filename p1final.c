#include <stdio.h>

int input()
{
  int a;
  printf("enter value");
  scanf("%d" ,&a);
  return a;
}
int add(int a, int b,int*sum)

{
  
    *sum=a+b;
  return *sum;
  
}
void output(int a, int b, int sum)
{
   printf("sum of 2 numbers %d+%d=%d"  ,a,b,sum);

}
int main()
{
  int a,b,result,sum;
  a=input();
  b=input();
  result=add(a,b,&sum);
  output(a,b,result);
  
  return 0;
}