#include<stdio.h>
int main()
{
	int n,a=0,c;
	printf("Enter a number:");
	scanf("%d",&n);
	c=n;
	while(n!=0)
	{
		a=a*10+(n%10);
		n/=10;
	}
		if(c==a)
			printf("%d is a palindrome number.",c);
		else
			printf("%d is not a palindrome number.",c);
	return 0;
}
