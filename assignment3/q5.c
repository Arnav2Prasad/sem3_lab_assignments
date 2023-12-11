#include <stdio.h>

int main(){
	int arr[100][100];

	int r1;
	int c1;
	printf("Enter the number of rows for Matrix-1 : ");
	scanf("%d",&r1);
	printf("Enter the number of columns for Matrix-1 : ");
        scanf("%d",&c1);

	int r2;
        int c2;
        printf("Enter the number of rows for Matrix-2 : ");
        scanf("%d",&r2);
        printf("Enter the number of columns for Matrix-2 : ");
        scanf("%d",&c2);
	
	int m1[r1][c1];	
	int m2[r2][c2];

	printf("Enter elements from matrix-1 : \n");
	for (int i=0;i<r1;i++){
		for (int j=0;j<c1;j++){
			printf("Enter element [%d][%d]: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter elements from matrix-2 : \n");
        for (int i=0;i<r2;i++){
                for (int j=0;j<c2;j++){
                        printf("Enter element [%d][%d]: ",i,j);
                        scanf("%d",&m2[i][j]);
                }
        }


	printf("Menue \n1. Addition\n2. Subtraction\n3. Multiplication\n");
	int n;
	printf("Enter option(between 1 and 3) : ");
	scanf("%d",&n);

	switch(n){
		case 1:
			printf("ADDITION\n");
			int sum[100][100];
			if (r1==r2 && c1==c2){
				for (int i=0;i<r1;i++){
					for (int j=0;j<c1;j++){
						sum[i][j]=m1[i][j]+m2[i][j];
					}
				}
				for (int i=0;i<r1;i++){
                			for (int j=0;j<c2;j++){
                        			printf("Element [%d][%d]: %d\n",i,j,sum[i][j]);
                			}		
        			}	

			}
			else{
				printf("Addition cant be supported for the given matrix\n");
			}
			break;

		case 2:
                        printf("SUBTRACTION\n");
                        int sub[100][100];
                        if (r1==r2 && c1==c2){
                                for (int i=0;i<r1;i++){
                                        for (int j=0;j<c1;j++){
                                                sub[i][j]=m1[i][j]-m2[i][j];
                                        }
                                }
                                for (int i=0;i<r1;i++){
                                        for (int j=0;j<c1;j++){
                                                printf("Element [%d][%d]: %d\n",i,j,sub[i][j]);
                                        }
                                }

                        }
                        else{
                                printf("Subtraction cant be supported for the given matrix\n");
                        }
		case 3:
			
			if (c1==r2){
				printf("MULTIPLICATION\n");
			int mul[100][100];
			for (int i=0;i<r1;i++) {
     			   for (int j=0;j<c2;j++) {
            			mul[i][j] = 0;
           				 for (intk=0;k<c1;k++) {
                				mul[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
			for (int i=0;i<r1;i++){
                                        for (int j=0;j<c2;j++){
                                                printf("Element [%d][%d]: %d\n",i,j,mul[i][j]);
                                        }
                                }
			}
			else{
				printf("Multiplication cant occur, as size of matrices are not compatible\n");

	}	
	}	
	return 0;
}
