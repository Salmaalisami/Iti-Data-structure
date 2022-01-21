#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	
}Node;
Node *LinkedList_create(int n);
Node *LinkedList_insert_begin(Node* head,int n);
void LinkedList_print(Node *head);


Node *LinkedList_create(int n) 
{
	Node *head=(Node*)malloc(sizeof(Node)); // dynamically allocated pointer to the node(struct)
	if (head!=NULL) //bt2aked an el head byshawer 3ala node already
	{
		head->data=n;
		head->next=NULL; //msh dangling 3ashan fal heap
	}
	return head;
}

Node *LinkedList_insert_begin(Node* head,int n) //lazm yab2a m3aya pointer el head, asmaha preappend
{
	Node *newnode=(Node*)malloc(sizeof(Node));
	
	if (newnode!=NULL)
	{
	newnode->data=n;
	newnode->next=head;
	head=newnode;
	}
	return head;
}

void LinkedList_print(Node *head)
{
	Node *list=head;  //create pointer byshawer 3ala awl node fa bkhaleh = el head
	
	printf("\n");
	while(list !=NULL)
	{
		printf("%d\n",list->data);
		list=list->next;
	}
	printf("\n");
	
}

void swap(int *a, int *b)
 {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void *LinkedList_insert_end(Node* head,int n) //append
{
	Node *end=head; // msh lazm wa momken amshe bal head 3ashan heya asln copy laken msh el head el asleya
	while(1)
	{
		if(end->next==NULL)
		{
			Node* newnode=(Node*)malloc(sizeof(Node));
			if(newnode !=NULL)
			{
				newnode->data=n;
				newnode->next=NULL;
				end->next=newnode;
			}
			break;
		}
		end=end->next;
	}
		
	
	/*while(end->next==NULL) 
	{
		end=end->next; // same as i++
		if (end==NULL);
		{
			end->data=n;
			end->next=NULL;
			
		}
	*/
}

Node *LinkedList_search(Node* head,int key)
{	
	while(head !=NULL && head->data!=key)
	{
		head=head->next;
		
	}
	return head;
	if (head==NULL)
	{
		printf("Not found");
	}
	
    /* OR
	
	while(head !=NULL)
	{
		if(head->data==key)
		{
			break;
		}
		head=head->next;
	}
	return head;
	
	*/ 
	
		/* mine
		
		while(1)
	{
		head=head->next;
		
		if(head->data ==key)
		{
			return head;
		}
		break;
		
	}*/

}

void LinkedList_insert_middle(Node *prev_node, int n)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	
	if (newnode!=NULL)
	{
	newnode->next=prev_node->next;
	prev_node->next=newnode;
	newnode->data=n;
	
	/*newnode->data=n;
	prev_node=newnode;*/
		
	}
}

void LinkedList_delet_next(Node *prev_node)
{
	
	Node *temp=prev_node->next;
	prev_node->next=temp->next;
	free(temp);

}

void selection_sort(Node *head)
{
	Node* nj;
	Node* ni;
	
	for(ni=head;ni->next !=NULL;ni=ni->next)
	{
		
		for (nj=ni->next;nj!=NULL;nj=nj->next)
		{
			if(nj->data < ni->data)
			{
				swap(&(nj->data),&(ni->data)); //bangeb el data wa ba3den n access el adress
			}
		}
	}
}




void main(void)
{
	int n=10,m=5,s=55,x=1;
	Node *ptr;
	
	Node* list=LinkedList_create(20);
	list =LinkedList_insert_begin(list,n);
	list =LinkedList_insert_begin(list,m);
	LinkedList_insert_end(list,s);
	LinkedList_insert_end(list,x);
	//list =LinkedList_insert_end(list,x);
	
	LinkedList_print(list);
	
	ptr=LinkedList_search(list,10);
	//ptr->data=70;
	//printf("%d\n",*ptr);
	LinkedList_insert_middle(ptr,30);
	
	LinkedList_print(list);
	LinkedList_delet_next(ptr);
	LinkedList_print(list);
	
	selection_sort(list);
	
	LinkedList_print(list);
	
	//head=LinkedList_create(10);
	//LinkedList_insert_begin(head,5);
}



