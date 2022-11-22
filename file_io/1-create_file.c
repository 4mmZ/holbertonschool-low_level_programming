#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	int str, w, file;

	file = open(filename, O_CREAT | O_WRONLY, 0600);

	if (filename == NULL)
		return(-1);

	if (file == -1)
		return (0);
	str = strlen(text_content);
	w = write(file, text_content, str);
	if (w == -1)
		return (0);
	close(file);
	
	return(1);
}
