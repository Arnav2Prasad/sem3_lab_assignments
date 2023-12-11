#include <stdio.h>
#include <limits.h>

int main(){
	int max=INT_MIN;
	int smax=INT_MIN;
	int arr[100]={0};

	int n;
	printf("Enter dimension of array : ");
	scanf("%d",&n);

	if (n<2) {
        printf("At least two integers are needed in the array to find the average of the largest two.\n");
        return 1;
    }

	for (int i=0;i<n;i++){
		printf("Enter element [%d] of array : ",i);
		scanf("%d",&arr[i]);
	}

	for (int i=0;i<n;i++){
		if (arr[i]>max){
			max=arr[i];
		}
	}
	for (int i=0;i<n;i++){
		if (arr[i]>smax && arr[i]!=max){
			smax=arr[i];
		}
	}

	float avg=(float)(max+smax)/2;

	printf("Average of the 2 maximum number ie %d and %d is : %f\n",max,smax,avg);

	return 0;
}
