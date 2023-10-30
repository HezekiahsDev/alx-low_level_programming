#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content to the console.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *file_content_buffer;

	if (filename == NULL)
		return (0);
	/*Open the file*/
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	/*Allocate memory for the buffer*/
	file_content_buffer = malloc(sizeof(char) * letters);
	if (file_content_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	/*Read from the file*/
	bytes_read = read(file_descriptor, file_content_buffer, letters);
	close(file_descriptor);
	if (bytes_read == -1)
	{
		free(file_content_buffer);
		return (0);
	}
	/*Write to the console*/
	bytes_written = write(STDOUT_FILENO, file_content_buffer, bytes_read);
	free(file_content_buffer);
	if (bytes_read != bytes_written)
		return (0);

	return (bytes_written);
}

