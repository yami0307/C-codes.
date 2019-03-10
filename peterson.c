#include<stdio.h>
int main()
{
	int n,x,i,s=0,k,f;
	printf("\n Enter a number:");
	scanf("%d",&n);
	x=n;
	while(n)
	{
		k=n%10; f=1;
		for(i=1;i<=k;i++)
			f=f*i;
		s=s+f;
		n=n/10;
	}
		if(s==x)
			printf("\n The entered number is a peterson number.");
		else
			printf("\n The enetered number is not a peterson number.");
	return 0;
}
