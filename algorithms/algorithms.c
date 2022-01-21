
#include<stdio.h>
#include"algorithms.h"

#define array_sz(a) (sizeof(a)/sizeof(a[0]))
#define SIZE 7

void swap(int *a, int *b);

int main(void)
{
	int arr[]={50,14,70,84,56,62,30};
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	//bubble_sort(arr,SIZE);
	//selection_sort(arr,SIZE);
	insertion_sort(arr,SIZE);
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}


}
void swap(int *a, int *b)
 {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int arr[],int size)
{
	int i=0,j=0;
	int temp=0;
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}	
	}
}

void selection_sort(int arr[],int size)
{
	int i=0,j=0,min=0;
	
	for(i=0;i<6;i++)
	{
		min=i;
		for (j=i+1;j<7;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		swap(&arr[min],&arr[i]);
	}
}

void insertion_sort(int arr[],int size)
{
	int temp;
	int j;
	for (int i=1;i<size;i++)
	{
		temp=arr[i];
		j=i-1;
		
		while(j>=0 & arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
		
	}
}