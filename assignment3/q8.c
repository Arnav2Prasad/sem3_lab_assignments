#include <stdio.h>

int main(){
        int arr[100][100];

        int rows;
        int cols;

        printf("Enter row element for matrix : ");
        scanf("%d",&rows);
        printf("Enter column element for matrix : ");
        scanf("%d",&cols);

        for (int i=0;i<rows;i++){
                for (int j=0;j<cols;j++){
                        printf("Enter element at [%d][%d] : ",i,j);
                        scanf("%d",&arr[i][j]);
                }
        }

        printf("LOWER TRIANGULAR MATRIX\n");
        for (int i=0;i<rows;i++){
                for (int j=0;j<cols;j++){
                        if (i>=j){
                                printf("%d ",arr[i][j]);
                        }

                        else{
                                printf("%d ",0);
                        }
                }
                printf("\n");
        }

        printf("UPPER TRIANGULAR MATRIX\n");
        for (int i=0;i<rows;i++){
                for (int j=0;j<cols;j++){
                        if (j>=i){
                                printf("%d ",arr[i][j]);
                        }
                        else{
                                printf("%d ",0);
                        }
                }
                printf("\n");
        }
        return 0;
}


