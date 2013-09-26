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
		if (argv[i] == NULL)
		{
			printf("WE GOT A NULL CHARACTER\n");
		}
		printf("arg %d: %s\n", i, argv[i]);
	}

	// let's make our own array of strings
	char *states[] = {
		"California", NULL, "Washington", "Texas", "Oregon"
	};

	int num_states = 5;

	for (i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n",  i, states[i]);
	}

	return 0;
}