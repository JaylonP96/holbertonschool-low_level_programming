#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
  int i, j, sum1, sum2;
	{
		for (i=0; i < size; i++)
		  {
		    sum1 += a[i];
		    a += size;
		  }
		a -= size;
		
	        for (j=0; j < size; j++, i--)
		  {
		  sum2 += a[j][i];
		  
		  }
	}
	printf ("%d, %d\n", sum1 , sum2);
}	
