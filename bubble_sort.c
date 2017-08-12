#include <assert.h>
#include <stdio.h>

#define DN 1000

int main (int argc, char** argv)
{
	int A [DN];
	int N;
	printf ("Enter number of elements (MAX %d): ", DN);
	scanf ("%d", &N);

	assert (N < DN);

	int i;
	for (i = 0; i < N; ++ i) 
	{
		printf ("A [%d] = ", i + 1);
		scanf ("%d", &A[i]);
	}

	printf ("Unsorted:\n");

	for (i = 0; i < N; ++ i) 
	{
		printf ("%d\t", A [i]);
	}
	printf ("\n");


	int temp;
	int done = 1;
	
	do
	  {
		done = 1;
		for (i = 0; i < N-1; ++ i)
			if (A [i] > A [i+1])
			{
				done = 0;
				temp = A [i];	
				A [i] = A [i+1];
				A[i+1] = temp;	
			}
	 }
	while (!done);
	


	printf ("Sorted:\n");


	for (i = 0; i < N; ++ i) 
	{
		printf ("%d\t", A [i]);
	}
	printf ("\n");


	return 0;
}
