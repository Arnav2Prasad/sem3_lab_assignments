#include <stdio.h>

int main() {
    int arr[100];
    int size,position;

    printf("Enter dimension for array: ");
    scanf("%d",&size);

    if (size<=0||size>100) {
        printf("Invalid array size.\n");
        return 1; 
    }

    printf("Enter the elements for the array:\n");
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the position to delete (0 based indexing): ");
    scanf("%d",&position);

    if (position<0||position>=size) {
        printf("Invalid position.\n");
        return 1;
    }

    for (int i=position;i<size-1;i++) {
        arr[i]=arr[i+1];
    }

    size--; // Reduce size of the array

    printf("Modified array after deletion:\n");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

