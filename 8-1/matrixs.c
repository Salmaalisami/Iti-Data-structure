#include <stdio.h>

/*int main()
{
	int matrix1[3][3]={{2,2,2},
	                   {3,3,3},
					   {4,4,4}};
	int matrix2[3][3]={{0,0,2},
					   {0,2,0},
					   {0,2,0}};
	int mult[3][3]={0};
	
	for(int r=0;r<3;r++)
	{
		for (int c=0;c<3;c++)
		{
			for (int k=0;k<3;k++) // el k heya 3dad el colums 
			{
				mult[r][c]+=(matrix1[r][k]*matrix2[c][k]);
				
			}
			
		}
	}
	
	for(int r=0;r<3;r++)
	{
		for (int c=0;c<3;c++)
		{
			printf("%d",mult[r][c]);
		}
		printf("\n");
	}	
}*/

void mutrixmult(int a[][3], int b[][3],int m[][3],int r,int c);
//lazm aktab el colum, yahmo 3dad el colums 3ashan salh ystntag 3dad el rows

int main()
{
	int matrix1[3][3]={{2,2,2},
	                   {3,3,3},
					   {4,4,4}};
	int matrix2[3][3]={{0,0,2},
					   {0,2,0},
					   {0,2,0}};
	int mult[3][3]={0};
	
	matrixmult(matrix1[][3],matrix2[][3],3,3);
	
	for(int r=0;r<3;r++)
	{
		for (int c=0;c<3;c++)
		{
			printf("%d",mult[r][c]);
		}
		printf("\n");
	}
	
	
}

void mutrixmult(int a[][3], int b[][3],int m[][3],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			for (int k=0;k<c;k++) // el k heya 3dad el colums 
			{
			    mult[i][j]+=(a[i][k]*b[j][k]);
				
			}
			
		}
	}
}