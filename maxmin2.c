#include<stdio.h>
int main()
{
	int a[10],i,max,min;
	for(i=0;i<10;i++)
	{
		printf("\n Enter data:");
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("\n Max=%d",max);
	printf("\n Min=%d",min);
return 0;
}
