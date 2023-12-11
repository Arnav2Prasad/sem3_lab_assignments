typedef struct node{
        char data;
        struct node* next;
}node;

void init(struct node** head);
int isEmpty(struct node* head);
int size(struct node* head);
void push(struct node** head,char data);
char pop(struct node** head);
char top(struct node* head);
void display(struct node* head);

