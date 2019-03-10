#include<stdio.h>
int main()
{
	float a,b,c,sum,avg;
	printf("Enter three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	sum=a+b+c;
	printf("The sum of %f,%f and %f is %f", a,b,c,sum);
	avg= sum/3.0;
	printf("\n The average of the three numbers entered is %f", avg);
	return 0;

}
