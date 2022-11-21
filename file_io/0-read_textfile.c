#include "main.h"

/**
*read_textfile - function that reads a prints the content of a file
*@filename: the file taht should be printed
*@letters:  the number of letters it should read and print
*Return: the actual number of letters it could read and print
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j;
	size_t *buff;
	size_t file;

	file = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);
	if (!filename)
		return (0);
	buff = malloc(letters - 1);
	j = read(file, buff, letters);
	if (j == -1)
		return (0);
	buff[letters + 1] = '\0';
	i = write(STDOUT_FILENO, buff, j);
	if (i == -1)
		return (0);
	close(file);
	free(buff);
	return (i);

}
