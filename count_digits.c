#include<stdio.h>
int main()
{
  long int n;
  int count=0;
  printf("Enter the integer\n");
  scanf("%ld",&n);
  while(n!=0)
  {
  n=n/10;
  count++;
  }
  printf("The no. of digits are.... %d",count);
  return 0;
 }
