#include<stdio.h>

int array_print(int arr[],int size);

int main()
{
	/*int arr[10]={0};
	int *ptr=arr;
	
	printf("%d/n",sizeof(ptr));
	printf("%d",sizeof(arr));*/
	
	int arr[5]={1,2,3,4,5};
	
	array_print(arr,5);
}


int array_print(int arr[],int size)// arr[]  ya3ne value aw arr[1000]
{
	for (int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}