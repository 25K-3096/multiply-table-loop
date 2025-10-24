#include <stdio.h>

int main(){
	int i,j,indi,indj,max;
	int matrix[3][4]= {{10,22,35,41},{50,65,75,80},{91,10,11,12}}; 
	max = matrix[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(matrix[i][j]>max){
				max=matrix[i][j];
				indi=i;
				indj=j;
			}
		}
	}
	printf("the maximum number found in the array is %d at row %d, column %d",max,indi,indj);
	return 0;
}
