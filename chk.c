#include<stdio.h>
int main()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  if(a>0)
    printf("The input number is positive");
  else if(a<0)
    printf("0");
    else
      printf("The number is zero");
    return 0;
}