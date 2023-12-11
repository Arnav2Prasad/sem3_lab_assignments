#include <stdio.h>

void add(int arr[],int n,int index,int ele){
        if (index==n-2){
                arr[index]=ele;
                return;
        }
        int temp=arr[index];
        for (int i=n-1;i>index;i--){
                arr[i]=arr[i-1];
        }
        arr[index]=ele;
}



int main(){
        int arr[100];

        int n;
        printf("Enter dimension of array : ");
        scanf("%d",&n);

        for (int i=0;i<n-1;i++){
                printf("Enter element [%d] : ",i);
                scanf("%d",&arr[i]);
        }

        printf("Original array : ");
        for (int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");

        int index,ele;
        printf("Index position at which you want to add the element in array : ");
        scanf("%d",&index);

        printf("Element : ");
        scanf("%d",&ele);

        add(arr,n,index,ele);

        for (int i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");

        return 0;
}

