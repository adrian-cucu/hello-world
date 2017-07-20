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
	int ac = argc;
	char ** av = argv;

	-- ac;
	++ av;

	while (ac && av) {

		puts (*av);

		--ac;
		++av;
	}
		
	return 0;
}
