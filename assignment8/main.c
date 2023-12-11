#include "list.c"

int main(){
	struct node* head;
	init(&head);

	printf("Menue : \n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Front\n");
	printf("4. IsEmpty\n");
	printf("5. Size\n");
	printf("6. Display\n");
	printf("7. Exit\n");
	printf("----\n");
	int x=0;
	do{
		printf("----\n");
		printf("Enter Your Choice : ");
		scanf("%d",&x);
		printf("----\n");

		switch(x){
			case 1:
				printf("You have opted for Enqueue Function\n");
				printf("Enter character to be appended : ");
				char ch;
				scanf(" %c",&ch);
				enqueue(&head,ch);
				break;
			case 2:
				printf("You have opted for Dequeue Function\n");
				printf("%c\n",dequeue(&head));
				break;
			case 3:
				printf("You have opted for Front Function\n");
				printf("%c\n",front(head));
				break;
			case 4:
				printf("You have opted for IsEmpty Function\n");
                                printf("%d\n",isEmpty(head));
                                break;
			case 5:
				printf("You have opted for Size Function\n");
                                printf("%d\n",size(head));
                                break;
			case 6:
				printf("You have opted for Display  Function\n");
                                display(head);
                                break;
			default:
				printf("Bye !\n");
				break;
		}
		
	}while (x!=7);
	return 0;
}



