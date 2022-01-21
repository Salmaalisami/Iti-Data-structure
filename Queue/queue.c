#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int front;
	int back;
	int size;
	int*arr;
	int count;
}Queue;

void queue_create(Queue* me, int* arr, int size);
void queue_create(Queue* me, int* arr, int size)
{
		if(me!=NULL)
	{
		me->arr=arr;
		me->size=size;
		me->front=0;
		me->back=0;
		me->count=0;
	}
}

void queue_enqueue(Queue* me,int value);
void queue_enqueue(Queue* me,int value)
{
	//check if queue is full
	if(!queue_isFull(me))
	{
		me->arr[me->back]=value;
		/*if(me->back < me->size)
		{
			me->back++;
		}
		else 
		{
			me->back=0;
		}*/
		(me->back < me->size) ? (me->back++) : (me->back=0);
		//me->back=(me->back+1)% me->size;
		
		me->count++;	
	}
}

int queue_dequeue(Queue* me);
int queue_dequeue(Queue* me)
{
	int front_value
	if(!queue_isEmpty(me))
	{
		front_value=me->arr[me->front];
		me->front=(me->front+1)% me->size;
		count--;
	}
}



void queue_peekFront();
void queue_peekBack();


void queue_isFull(Queue* me)
{
	return (me->count==me->size);
}

void queue_isEmpty(Queue* me);
{
	return (me->count==0);
}

void queue_clear(Queue* me);
{
	me->count=0;
	me->front=0;
	me->back=0;
}
