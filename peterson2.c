#include<stdio.h>
int main()
{
	int n,m,s=0,f,x,i;
	printf("\n Enter a number:");
	scanf("%d",&n);
	x=n;
	while(n)
	{
		m=n%10; f=1;
		for(i=1;i<=m;i++)
			f=f*i;
		s=s+f;
		n=n/10;
	}
		if(s==x)
			printf("Entered number is a peterson number.");
		else
			printf("Entered number is not a peterson number.");
	return 0;
}
