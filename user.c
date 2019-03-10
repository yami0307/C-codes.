#include<stdio.h>
void user()
{
char username[20];
int age;
printf("Enter your name and age:");
scanf("%s",username);
scanf("%d", &age);
printf("Hi %s you are %d years old", username,age);
}
int main()
{
int n;
printf("\n Enter the number of users:");
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
user();
printf("\n");
}
return 0;
}
