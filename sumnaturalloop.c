#include<stdio.h>
int main()
{
  int x,j,add=0;
  printf("Enter the positive number\n");
  scanf("%d",&x);
  for(j=1;j<=x;j++)
  {
  add=add+j;
  }
  printf("The sum is %d",add);
  return 0;
 }
