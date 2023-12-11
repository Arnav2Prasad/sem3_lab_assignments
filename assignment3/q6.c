#include <stdio.h>

int main(){
	int arr[100][100];

	int r,c;

	printf("Enter number of rows for matrix : ");
	scanf("%d",&r);
	printf("Enter number of columns for matrix : ");
        scanf("%d",&c);


	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("Enter element [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			if (i==j){
				sum+=arr[i][j];
			}
		}
	}
	printf("sum of diagonal elements of a matrix : %d\n",sum);

	return 0;
}
