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

	int j, min_el, min_el_ind;

	for (i = 0; i < N-1; ++ i) 
	{
		min_el = A [i];
		min_el_ind = i;	
	
		for (j = i+1; j < N; ++ j)
		{
			if (min_el > A [j])
			{
				min_el_ind = j;
				min_el = A [j];
			}
		}

		A [min_el_ind] = A [i];
		A [i] = min_el;	
	}

	int is_sorted = 1;

	for (i = 1; i < N && is_sorted; ++ i) 
		is_sorted &= (A [i-1] <= A[i]);
	
	assert (is_sorted);	

	printf ("Sorted:\n");

	for (i = 0; i < N; ++ i) 
	{
		printf ("%d\t", A [i]);
	}
	printf ("\n");

	return 0;
}
