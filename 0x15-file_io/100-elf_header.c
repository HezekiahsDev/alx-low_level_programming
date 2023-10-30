#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/**
 * error_exit - Display an error message to stderr and
 * exit with status code 98.
 * @msg: The error message to display.
 */
void error_exit(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Display ELF header information
 * for a given ELF file.
 * @file_descriptor: The file descriptor of the ELF file.
 */
void print_elf_header(int file_descriptor)
{
	Elf64_Ehdr header; /*ELF header structure*/
	ssize_t bytes_read;

	/*Read the ELF header*/
	bytes_read = read(file_descriptor, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		error_exit("Error: Unable to read ELF header");
	}

	/*Verify that it's a valid ELF file*/
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		error_exit("Error: Not an ELF file");
	}

    /*Display ELF header information*/
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header.e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
	}
	printf("\nClass: %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data: 2's complement, %s endian\n",
	header.e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
	"UNIX - System V" : "Other");
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" :
	header.e_type == ET_DYN ? "DYN (Shared object file)" :
	header.e_type == ET_REL ? "REL (Relocatable file)" : "Other");
	printf("Entry point address: %#lx\n", (unsigned long)header.e_entry);
}

int main(int argc, char *argv[])
{
	int file_descriptor;

	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename");
	}
	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		error_exit("Error: Can't open ELF file");
	}
	print_elf_header(file_descriptor);
	close(file_descriptor);
	return (0);
}
