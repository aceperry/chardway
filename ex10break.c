#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	// go through each string in argv
	// why am I skipping argv[0]?
	printf("We got %d ARGS\n", argc - 1);
	printf("With command line invocation from \"%s\"\n", argv[0]);
	for (i = 1; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	// let's make our own array of strings
	char *states[] = {
		"California", "Washington", "Texas", "Oregon"
	};

	int num_states = sizeof(states) / sizeof(char*);

	printf("\nSize of char * is %lu bytes\n", sizeof(char*));

	printf("\nstates array is %lu bytes long and has %d elements.\n", sizeof(states), num_states);

	for (i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n",  i, states[i]);
	}

	return 0;
}