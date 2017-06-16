#include<stdio.h>
int main()
{
  int a,i,sum=0;
  printf("Enter the positive number\n");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
  sum=sum+i;
  }
  printf("The sum is %d",sum);
  return 0;
 }
