#include<stdio.h>
typedef struct Complex
{
    float real;
    float imaginary;
}Complex;
int get_n()
{
    int n;
    printf("enter number of complex numbers");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("enter the real value");
    scanf("%f",&c.real);
    printf("enter the imaginary value");
    scanf("%f",&c.imaginary);
    return c;
}
void input_n_complex(int n,Complex c[n])
{
    for(int i=0;i<n;i++)
    { 
        c[i]=input_complex();
    }    
}
Complex add(Complex a,Complex b)
{
    Complex res;
    res.real=a.real+b.real;
    res.imaginary=a.imaginary+b.imaginary;
    return res;
}
Complex add_n_complex(int n,Complex c[n])
{
  Complex res;
  res.imaginary=0;
  res.real=0;
  for(int i=0;i<n;i++)
  {
      res=add(res,c[i]);
  }
  return res;
}
void output(int n,Complex c[n],Complex result)
{
  if(n==1)
  {
      printf("%0.3f + %0.3fi is %0.3f + %0.3fi\n",c[0].real,c[0].imaginary,result.real,result.imaginary);
  }
  else
  {
      for(int i=0;i<n;i++)
      {
          printf("%0.3f + %0.3fi\n",c[i].real,c[i].imaginary);
      }
      printf("%0.3f + %0.3fi is\n%0.3f + %0.3fi\n",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
  }
}
int main()
{
  int n = get_n();
  Complex c[n],res;
  input_n_complex(n,c);
  res = add_n_complex(n,c);
  output(n,c,res);
  return 0;
}
