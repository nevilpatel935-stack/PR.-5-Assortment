#include<stdio.h>

int main()
{
	int row,col,i,j;
	int a[25][25];
	
	printf("enter the array of row size :");
	scanf("%d",&row);
	printf("enter the array of column size :");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
	  for(j=0;j<col;j++)
	  {
	  	printf("a[%d][%d]:",i,j);
	  	scanf("%d",&a[i][j]);
		  }	
	}	
	int temp = a[0][0];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>temp)
			{
				temp=a[i][j];
			}
		}
	}
	printf("largest value is = %d", temp );
	
	return 0;
	
}
