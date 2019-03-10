#include<stdio.h>
int main()
{
	int n,s=0,a,x;
	printf("\n Enter a number:");
	scanf("%d",&n);
	x=n;
	while(n>0)
		{
			a=n%10;
			s=s+a*a*a;
			n=n/10;
		}
	if(s==x)
		printf("\n The entered number is an Armstrong Number.");
	else
		printf("\n The entered number is not a Armstrong Number.");
return 0;
}
