#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Copies the content from a file to another file
  * @ac: number of argument supplied
  * @av: array of pointers to arguments
  * Return: On Success 0
  */
int main(int ac, char *av[])
{
	int draw_from, draw_to, star, beg;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	draw_from = open(av[1], O_RDONLY);
	if (draw_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	draw_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (draw_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	star = 1;
	while (star)
	{
		star = read(draw_from, buffer, BUFSIZ);
		if (star == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (star > 0)
		{
			beg = write(draw_to, buffer, star);
			if (beg != star || beg == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(draw_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", draw_from), exit(100);
	if (close(draw_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", draw_to), exit(100);
	return (0);
}
