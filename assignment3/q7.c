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
        int rsum=0;
	int csum=0;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			rsum+=arr[i][j];
		}
		printf("Row sum of %d row is : %d\n",i,rsum);
		rsum=0;
	}
	for (int j=0;j<c;j++){
                for (int i=0;i<c;i++){
                        csum+=arr[i][j];
                }
                printf("Column sum of %d row is : %d\n",j,csum);
                csum=0;
        }
	return 0;
}

			

