#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "list.h"

void init(struct node** head){
	(*head)=NULL;
	return;
}

int isEmpty(struct node* head){
	if (head==NULL){
		return 1;
	}
	return 0;
}

int size(struct node* head){
	if (isEmpty(head)){
		return 0;
	}
	struct node* curr=(head);
	int ans=0;
	while (curr != NULL){
		ans++;
		curr=curr->next;
	}
	return ans;
}

void push(struct node** head,char data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if (temp){
		temp->data=data;
		temp->next=NULL;
	}
	else{
		return;
	}
	if (isEmpty(*head)){
		(*head)=temp;
		return;
	}
	struct node* curr=(*head);
	while (curr->next != NULL){
		curr=curr->next;
	}
	curr->next=temp;
	return;
}

char pop(struct node** head){
	if (isEmpty(*head)){
		return 'X';
	}
	struct node* curr=(*head);

	if (size(*head)==1){
		char a=(*head)->data;
		(*head)=NULL;
		return a;
	}
	while (curr ->next ->next != NULL){
		curr=curr->next;
	}
	struct node* del=curr->next;
	char a=curr->next->data;
	curr->next=NULL;
	free(del);
	return a;
}

char top(struct node* head){
	if (head==NULL){
		return 'X';
	}
	struct node* curr=head;
	while (curr->next != NULL){
		curr=curr->next;
	}
	return curr->data;

}

void display(struct node* head){
	if (head==NULL){
		return;
	}
	struct node* curr=head;
	while (curr!=NULL){
		printf("%c -> ",curr->data);
		curr=curr->next;
	}
	printf("NULL\n");
	return;
}

