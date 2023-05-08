#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text and prints to POSIX stdout
 * @filename: pointer to filename
 * @letters: letters to be read and printed
 *
 * Return: actual number of letters it could read and print, or 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t docs, let, w;
	char *word;

	word = malloc(letters);
	if (word == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	docs = open(filename, O_RDONLY);

	if (docs == -1)
	{
		free(word);
		return (0);
	}

	let = read(docs, word, letters);

	w = write(STDOUT_FILENO, word, let);

	close(docs);

	return (w);
}
