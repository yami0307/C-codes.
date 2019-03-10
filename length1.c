#include<stdio.h>
int main()
{
	char string[50];
	int i,length=0;
	printf("\n Enter a string:");
	gets (string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	printf("The length of %s=%d\n",string,length);
return 0;
}
