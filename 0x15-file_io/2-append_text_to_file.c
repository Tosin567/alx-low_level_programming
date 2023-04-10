#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to file end
 * @filename: Pointer to file name
 * @text_content: String to be added to file end
 *
 * Return: On Failure -1, On Success 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	t = write(p, text_content, len);

	if (p == -1 || t == -1)
		return (-1);

	close(p);

	return (1);
}
