#include<stdio.h>
int main()
{
	int n,t,x,m=0;
	printf("\n Enter the first number:");
	scanf("%d",&n);
	printf("\n Enter the second number:");
	scanf("%d",&t);
	x=n;
	while(n!=0)
	{
		m=(m*10)+(n%10);
		n=n/10;
	}
		if(t==m)
			printf("Mirror Image.");
		else
			printf("Not a Mirror Image.");
	return 0;
}
