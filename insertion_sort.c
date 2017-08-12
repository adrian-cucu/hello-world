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

	int j, e;

	for (j = 1; j < N; ++ j)
	{
		e = A [j];
		i = j-1;

		while (i >= 0 && A [i] > e)
		{
			A [i+1] = A [i];
			--i;
		}	

		A [i+1] = e;
	}
	
	printf ("Sorted:\n");

	for (i = 0; i < N; ++ i) 
	{
		printf ("%d\t", A [i]);
	}
	printf ("\n");

	return 0;
}
