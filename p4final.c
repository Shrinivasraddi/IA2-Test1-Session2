#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the number of composite numbers to be added\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the numbers\n");
  int i;
  for(i=1;i<=n;i++)
 {
   scanf("%d",&a[i]);
 }
  int is_composite(int n)
  {
    int i;
    for(i=2;i<=n;i++)
    {
      if(n%i==0)
      return 1;
    }
    return 0;
  }
  int sum_composite_numbers(int n,int a[n])
  {
    int i,is_composite,sum=0;
    for(i=1;i<=n;i++)
    {
      if(is_composite==1)
      {
        sum= sum+a[i];
      }
      return sum;
    }
  }
  void out_put(int sum)
  {
    printf("%d\n",sum);
  }
  int main()
  {
    int n,sum,is_composite;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    out_put(sum);
    return 0;
  }