#include<stdio.h>
int main()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  if(a>0)
  {
  	printf("The number is positive.\n");
  }
  else if(a<0)
  {
  	printf("The Number is negative. \n");
  }
  else if(a==0)
  {
  	printf("The number is Zero\n");
  }
  return 0;
  }
