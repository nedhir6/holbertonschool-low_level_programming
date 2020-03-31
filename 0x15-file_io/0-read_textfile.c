#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *read_textfile - reads a text file and prints it to the POSIX stout
 *@filename: file name
 *@letters: number of letters it can read
 *Return: number of letters it can read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lettersR, lettersW;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	lettersR = read(fd, buff, letters);
	if (lettersR == -1)
	{
		close(fd);
		return (0);
	}
	lettersW = write(STDOUT_FILENO, buff, lettersR);
	close(fd);
	return (lettersW);
}
