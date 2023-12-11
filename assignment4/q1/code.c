#include <stdio.h>
#include "func.c"
int main(){
    struct Distance distance1, distance2, result;

    int flag=1;
    printf("******** MAIN MENU *********\n1. Read the distances\n2. Display the distances\n3. Add the distances\n4. Subtract the distances\n5. EXIT\n");
    int choice=-1;

    while (flag) {
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                printf("If you are using choice-1 again, the previous data will be overwritten\n");
                distance1=read(1);
                distance2=read(2);
                break;
            case 2:
                printf("Distance-1: ");
                display(distance1);
                printf("Distance-2: ");
                display(distance2);
                break;
            case 3:
                result=Add(distance1,distance2);
                printf("Sum of distances is : ");
                display(result);
                break;
            case 4:
                result=subtract(distance1,distance2);
                printf("Subtraction of distances is: ");
                display(result);
                break;
            case 5:
                flag=0;
                printf("Bye!\n");
                break;
            default:
                printf("Enter another Choice!\n");
        }
    }
    return 0;
}


