#include<stdio.h>

struct cvect_struct{
	int *vect;
	unsigned int size;
	unsigned int capacity;
};

cvect cvect_create(unsigned int size)
{
	cvect me=malloc(sizeof(struct cvect_struct));
	me->vect=malloc(sizeof(int)*size);
	me->size=size;
	me->capacity=size;
	return me;
}

void cvect_destroy(cvect me)
{
	free(me->vect);
	free(me);
}

void cvect_set(cvect me, unsigned int index,int data)
{
	if index <me->size;
	{
		me->vect[index]=data;
	}
}

int cvect get

void cvect_insert(cvect me, unsigned int index,int data)
{
	if (index<me->size)
	{
	if (me->size==me->capacity)
	{
		me->vect=recalloc(me->vect,((me->size*(100+10))/100)*sizeof(int));
	}
	me->size++;
	for (/*insert here*/);
	}
}
