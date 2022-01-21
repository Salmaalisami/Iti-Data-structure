#include<stdio.h>

int main(void)
{
	int*a [3];
	int (*b)[3];
	
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	
	printf("%d\n",sizeof(*a));
	printf("%d\n",sizeof(*b));
}