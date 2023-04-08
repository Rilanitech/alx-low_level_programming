#include "main.h"
/**
 * @filename: The name of the file
 * @lettters: The numbers to be printed
 * read_textfile - This will read and prints the letters
 * Return: Positive if numbers are printed. Failed when it returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int bb;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	bb = open(filename, O_RDONLY);

	if (bb == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(bb, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(bb);

	free(buf);

	return (nwr);
}
