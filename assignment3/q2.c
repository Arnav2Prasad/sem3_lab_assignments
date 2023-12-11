#include <stdio.h>

void reverse(int arr[],int start,int end){
	if (start>=end){
		return;
	}
	int temp;
	temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	return reverse(arr,start+1,end-1);
}

int main(){
	int arr[100];
	int n;

	printf("Enter dimension of array: ");
	scanf("%d",&n);

	for (int i=0;i<n;i++){
		printf("Enter element [%d] : ",i);
		scanf("%d",&arr[i]);
	}

	printf("Original array : ");
        for (int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");

	reverse(arr,0,n-1);

	printf("Reversed array : ");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}
