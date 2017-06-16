#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three numbers...\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b&&a>c)
  { 
    printf("A is Greater\n");
  }
  else if(b>a&&b>c)
  {
    printf("B is greater");
  }
  else if(c>a&&c>b)
  {
    printf("C is greater");
  }
  return 0;
 }
   
   
      
