#include<stdio.h>
int hcf(int a,int b)
{
	if(a%b==0)
		return b;
	else
		return hcf(b,a%b);
}
int main()
{
	int a,b;
	printf("\n Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\n The GCD of the two numbers %d and %d is: %d",a,b,hcf(a,b));
return 0;
}
