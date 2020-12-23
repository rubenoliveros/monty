#include "monty.h"

/**
 * main - Opens the file on argv[1] and interpret the monty script
 * @argc: numbers of arguments
 * @argv: array of arguments
 *
 * Return: EXIT_FAILURE on failure, EXIT_SUCCESS on success
 */
int main(int argc, char *argv[])
{
	FILE *file;

	if (argc !=2)
	{
		fprint(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Eror: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	ifile(file);
	fclose(file);
	return (EXIT_SUCCESS);
