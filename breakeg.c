#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("i = %d, j = %d\n",i,j);
			if(i>j)
				continue;
			printf("\n Statement after continue.\n");
		}
	}
	
	return 0;
}
