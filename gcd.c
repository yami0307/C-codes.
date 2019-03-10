#include<stdio.h>
int main()
{
	int a,b,c,gcd;
	printf("\n Enter two numbers:");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}
	
	gcd=a;
	printf("GCD is %d", gcd);
	return 0;
}
