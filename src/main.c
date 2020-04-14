#include <stdio.h>
#include <stdlib.h>
#include <mips/utils.h> 

extern void encode(FILE *output, FILE *input);
static void usage(void)
{
	fprintf(stderr, "mips-decode [input] [output]\n");
	exit(EXIT_FAILURE);
}

int main(int argc, const char *argv[])
{
	const char *errorstr;
	FILE *input, *output;
	input = stdin;
	output = stdout;

	if (argc > 3)
		usage();

	if (argc == 3)
	{
		if ((input = fopen(argv[1], "r")) == NULL)
		{
			errorstr = "cannot open input file";
			goto error0;
		}

		if ((output = fopen(argv[2], "w")) == NULL)
		{
			errorstr = "cannot create output file";
			goto error1;
		}
	}

	encode(output, input);
	fclose(input);
	fclose(output);
	return (EXIT_SUCCESS);

error1:
	fclose(input);
error0:
	error(errorstr);
	return (EXIT_FAILURE);
}
