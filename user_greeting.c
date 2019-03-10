#include<stdio.h>	// This includes the standard input output library

void user()
{
	char username[20];
	printf("Enter your name:");
	scanf("%s",username);
	
	// Dispalying the username
	printf("Hi, %s :)",username);
	return;
}
int main()
{
	//This the main function ; execution of the program starts from here
	int n;	//This n contains number of users
	printf("Enter the number of users: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)	//Takes the input for n users
	{
		user();	//Calling the user function
		printf("\n");
	}
	
	return 0; //Return 0 indicates 0 will be returned to the operating system indicating succesful completion of the program
}


