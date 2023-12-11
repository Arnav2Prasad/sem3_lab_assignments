typedef struct node{
	char data;
	struct node* next;
}node;

void init(struct node** head);
int isEmpty(struct node* head);
int size(struct node* head);
void enqueue(struct node** head,char data);
char dequeue(struct node** head);
char front(struct node* head);
void display(struct node* head);

