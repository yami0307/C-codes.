#include<stdio.h>
int isPrime(int num)
{
	int i;
	for(i=2;i<=(num/2);i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int l,i,u;
	printf("Enter the lower and upper limits:");
	scanf("%d %d",&l,&u);
	printf("The armstong number between %d and %d are:",l,u);
	for(i=l;i<=u;i++)
		{
			if(isPrime(i))
				printf("\n %d",i);
		}
	return 0;
}
