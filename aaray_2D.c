#include <stdio.h>
#include <stdlib.h>
intmain()
{
	int mat[3][3]={
		               {10,20,30},
					   {40,50,60},
					   {70,80,90}
		        	};  
				   
	int i,j;
//	printf
	for(i=0;i<3;i++)//row
	{
		for(j=0;j<3;j++)//col
		{
		  printf("%5d",mat[i][j]);
     	}
		printf("\n");
	}
	return 0;
}
