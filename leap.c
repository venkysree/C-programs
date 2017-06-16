#include<stdio.h>
int main()
{
  int a;
  printf("Enter the year\n");
  scanf("%d",&a);
  if(a%4==0)
  {
    printf("The year is a leap year\n");
  }
  else
  printf("Not a leap year\n");
  return 0;
 }
