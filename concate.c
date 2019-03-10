#include<stdio.h>
#include<string.h>
int main()
{
	char s1[1000],s2[1000],i,j;
	printf("\n Enter first string:");
	scanf("%s",s1);
	printf("\n Enter second string:");
	scanf("%s",s2);
	printf("After concatenation:%s",strcat(s1,s2));
	return 0;
}
