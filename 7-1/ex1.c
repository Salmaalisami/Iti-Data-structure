#include<stdio.h>

#define MAX 10
#define array_size(a) (sizeof(a)/sizeof(a[0]))

int array_insert(int arr[], int size,int num,int index);
void array_delete(int arr[], int size, int idx);
int array_print(int arr[],int size);

int main ()
{
	int arr[MAX]={20,55,34};
	//int *ptr=&arr[10];
	//printf("%d\n", sizeof(arr)); //el array kolaha 
	//printf("%d\n", sizeof(arr[0])); //awl element 
	// printf("%d\n", sizeof(ptr));
	
	array_insert(arr,array_size(arr),24,1);
	array_insert(arr,array_size(arr),10,2);
	array_insert(arr,array_size(arr),24,3);
	array_insert(arr,array_size(arr),10,4);
	array_insert(arr,array_size(arr),24,5);
	array_insert(arr,array_size(arr),10,6);
	array_insert(arr,array_size(arr),24,9);
	
	array_print(arr,array_size(arr));
	array_delete(arr,array_size(arr),6);
	printf("\n\n");
	array_print(arr,array_size(arr));
		
}

int array_insert(int arr[], int size,int num,int index)
{
	if ( -1 <index < size)
	{
		for(int i=size-1;i>index;i--)
		//for(int i=size-2;i>=index;i--)	
		{
			arr[i]=arr[i-1];
			//arr[i+1]=arr[i];
			
		}
		arr[index]=num;
	}	
}

void array_delete(int arr[], int size, int idx)
{
    if(idx< size-1)
    {
       //shift array to the left
       int i ;
        for ( i = idx; i < size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[i] = 0;
    }
}


int array_print(int arr[],int size)
{
	for (int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}