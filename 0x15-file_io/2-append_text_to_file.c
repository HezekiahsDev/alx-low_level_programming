#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to be added.
 *
 * Return: 1 if the file exists and the operation succeeds,
 * -1 if the file does not exist or if the operation fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_characters;
	int bytes_written;

	if (!filename)
		return (-1);

	/*Open the file for appending*/
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (num_characters = 0; text_content[num_characters]; num_characters++)
			;
		/*Append the content to the file*/
		bytes_written = write(file_descriptor, text_content, num_characters);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
