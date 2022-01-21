#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int top;
	int count;
	int arr_size;
	int*arr;
}Stack;

void stack_create(Stack* me, int* arr, int arr_size);
void stack_create(Stack* me, int* arr, int arr_size)
{
	if(me!=NULL)
	{
		me->arr=arr;
		me->arr_size=arr_size;
		me->top=0;
		me->count=0;
	}
}

void stack_push(Stack* me,int value);
void stack_push(Stack* me,int value)
{
	/*check is the stack full*/
	if(!stack_isFull(me))
	{
		me->arr[me->top]=value;
		if(me->top < me->arr_size)	
		{
			me->top++;
		}
		me->count++;
	}	
}
//hena b2lal el top bs wa lama age a3mal push ha over right 3al value el kant mawgoda asln
int stack_pop(Stack* me);
int stack_pop(Stack* me)
{
	int x=-1; //3ashan lw mdkhlsh fal if ya return -1
	if(!stack_isEmpty(me))
	{
		me->top--;
		me->count--;
		x=me->arr[me->top];
	}
	return x;
}

//return akhr value only
int stack_peek(Stack* me);
int stack_peek(Stack* me)
{
	int x=-1;
	if(!stack_isEmpty(me))
	{
		x=me->arr[me->top-1]; //hena value el top mtghyarsh
	}
	return x;
	
}

int stack_isEmpty(Stack* me);
int stack_isEmpty(Stack* me)
{
	return (me->top==0);
}

int stack_isFull(Stack* me);
int stack_isFull(Stack* me)
{
	return (me->top==me->arr_size);// if full =1
}

//hena brga3 el top be zero bs 
void stack_clear(Stack* me);
void stack_clear(Stack* me)
{
	me->top=0;
	me->count=0;
}


int main(void)
{
	Stack myStack;
	int s1[10];
	stack_create(&myStack,s1,10);
	stack_push(&myStack,50);
	
	
	for (int i=0;i<10;i++)
	{
		printf("%d\n",s1[i]);
	}
	
}
