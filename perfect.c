#include<stdio.h>
int main()
{
	int n,k=0,x,i;
	printf("\n Enter a number:");
	scanf("%d",&n);
	x=n;
	for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
				k=k+i;
		}
			if(k==x)
				printf("\n The entered number is a perfect number.");
			else
				printf("\n The entered number is not a perfect number.");
	return 0;
}
