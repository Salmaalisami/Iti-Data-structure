#include<stdio.h>

int search(int arr[],int num);

int main()
{	
	int x,index;
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	
	printf("Please enter your number:\n");
	scanf("%d",&x);
	index=search(arr,x);
	printf("Your index=%d",index);
	
	
}

int search(int arr[],int num)
{
	for(int i=0;i<10;i++)
	{
		if (arr[i]==num)
		{
			return i;
			break;
		}
		//printf("%d",arr[i]);
	}
	return -1;
}