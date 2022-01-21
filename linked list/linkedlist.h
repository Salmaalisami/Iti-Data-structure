typedef struct node
{
	int data;
	struct node *next;
	
}Node;


Node *LinkedList_create(int n);
Node *LinkedList_insert_begin(Node* head,int n); //asmaha preappend
void LinkedList_print(Node *head);
void swap(int *a, int *b);
void *LinkedList_insert_end(Node* head,int n); //append
Node *LinkedList_search(Node* head,int key);
void LinkedList_insert_middle(Node *prev_node, int n);
void LinkedList_delet_next(Node *prev_node);
void selection_sort(Node *head);









