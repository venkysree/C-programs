#include<stdio.h>
int main()
{
	int i,m,j,k=0,l=1;
	scanf("%d",&i);
	for(j=0;j<=i;j++)
	{
		m=k+l;
		if(m>=i)
		{
			printf("%d %d",k,l);
			break;
		}
		k=l;
		l=m;
	}
	return=0;
}
