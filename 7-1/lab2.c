#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int* array_create_int(int size);
void array_insert_end(int *arr, int curr_size,int num);

int main ()
{
	int *a2=array_create_int(MAX); //dynamically
	
	int arr_static[MAX]; //statically
	
	//int * ptr=(int*);
	for(int i=0; i<MAX;i++)
	{
		arr_static[i]=(i+1)*10;
	}
	
	for(int i=0; i<MAX;i++)
	{
		a2[i]=arr_static[i];
	}
	

	
	array_insert_end(a2,MAX,200);
	
	
	/*for (int i=0;i<MAX;i++)
	{
		printf("%d\n", a2[i]);
	}
	printf ("\n");*/
	
}

int* array_create_int(int size) //return pointer
{
	int* ptr=(int*)malloc(size*sizeof(int));
	return ptr;
}

void array_insert_end(int *arr, int curr_size,int num)
{
	int* arr2=(int*)realloc(arr, (curr_size+1)*sizeof(int));
	arr2[MAX]=num;
	
	for (int i=0;i<MAX+1;i++)
	{
		printf("%d\n", arr2[i]);
	}
}




