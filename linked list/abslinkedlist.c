#include "abslinkedlist.h"

//abstract data type
struct node
{
	int data;
	struct node *next;
	
};

struct ll_t
{
	Node* head;
	Node* tail;
	int count;
	
};

LinkedList LinkedList_create(int n) 
{
	LinkedList me==(LinkedList)malloc(sizeof(struct ll_t)); // dynamically allocated pointer to the node(struct)
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

void LinkedList_insert_begin(LinkedList me,int n) //lazm yab2a m3aya pointer el head, asmaha preappend
{
	Node *newnode=(Node*)malloc(sizeof(Node));
	
	if (newnode!=NULL)
	{
	newnode->data=n;
	newnode->next=me->head;
	me->head=newnode;
	me->count++;
	}
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

void LinkedList_insert_end(LinkedList me,int n) //append
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
