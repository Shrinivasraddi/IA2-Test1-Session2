#include<stdio.h>
int input_number()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    return 1;
  }
  return 0;
}
void output(int n,int is_composite)
{
  if(is_composite==1)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is not a composite number\n",n);
  }
}
int main()
{
  int n,a;
  n=input_number();
  a=is_composite(n);
  output(n,a);
  return 0;
}