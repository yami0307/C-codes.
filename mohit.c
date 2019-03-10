#include<stdio.h>
#define MAXSIZE 1000

int arr[MAXSIZE][MAXSIZE] = {0};
int m=0,n=0;
	
void input(){
	printf("Enter the number of rows and columns of MATRIX:- ");
	scanf("%d %d",&m,&n);
	
	printf("Enter the elements of the matrix:- ");
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
}

void display(){
	printf("The elements of the matrix are:- \n");
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
}

void transpose(){
	int i,j;
	for(i=0;i<m/2;i++){
		for(j=0;j<n/2;j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	
	int tmp = m;
	m = n;
	n = tmp;
}

int main(){
	input();
	printf("\n");
	display();
	transpose();
	
	printf("\nAfter TRANSPOSE\n");
	display();
	return 0;
}
