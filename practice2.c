#include <stdio.h>

int main(){
	int i,j,product;
	for(i=1;i<=5;i++){
		printf("%d:",i);
		for(j=1;j<=5;j++){
			product = i*j;
			printf("%4d",product);
		}
		printf("\n");
	}
	return 0;
}
