#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the side\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{ int isscalene;
  if(a!=b && a!=c && b!=c)
  {
   return 1;
  }
  else
  {
   return 2;
  }
}
void output(int a,int b,int c, int isscalene)
{
  if(isscalene==1)
  {
  printf("the given triangle is scalene\n");
  }
  else if(isscalene==2)
  {
    printf("the given triangle is not scalene\n");
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}