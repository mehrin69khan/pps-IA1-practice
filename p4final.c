#include <stdio.h>
int input_array_size()
{
  int n;
  printf("enter tge array size :\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter the element %d : ",i);
    scanf("%d",&a[i]);
  }
}
int sum_n_array(int n,int a[n]){
  int sum=0;
  for(int i=0;i<n;i++){
   sum += a[i];
  } 
  return sum;
}
int output(int n,int a[n],int sum){
   printf("sum of array elelments : %d",sum);
 }
int main(){
   int sum,n,a[100];
   n=input_array_size();
   input_array(n,a);
   sum = sum_n_array(n,a);
   output(n,a,sum);
   return 0;
 }