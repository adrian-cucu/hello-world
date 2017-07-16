#include <stdio.h>

/*
 * console:
 * 	> gcc args.c
 * 	> ./a.exe arg1 arg2 arg3 ...
 * 
 * Print:
 * 	arg1 arg2 arg3  ...
 *
 * */

int main (int argc, char **argv)
{
	int i;
	for (i = 1; i < argc; ++ i)
	{
		printf ("%s ", argv [i]);
	}			
	return 0;
}
