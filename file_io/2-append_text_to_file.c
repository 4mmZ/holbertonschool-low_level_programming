#include "main.h"

/**
 *append_text_to_file - function that creates a file
 *@filename: the file
 *@text_content: the content of the file
 *Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int str, w, file;

	if (!text_content)
	{
		file = open(filename, O_CREAT | O_WRONLY, 0600);
		return (1);
	}
	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_APPEND | O_WRONLY, 0600);

	if (file == -1)
		return (-1);
	str = strlen(text_content);
	w = write(file, text_content, str);
	if (w == -1)
		return (0);
	close(file);

	return (1);
}
