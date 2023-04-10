#include "main.h"
#include <unistd.h>

/**
 * create_file - create file
 * @filename: Pointer of the file to be created
 * @text_content: Pointer to string of file to be written
 *
 * Return: On failure -1, On Success 1
 */
int create_file(const char *filename, char *text_content)
{
	int p, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(p, text_content, len);

	if (p == -1 || t == -1)
		return (-1);

	close(p);

	return (1);
}
