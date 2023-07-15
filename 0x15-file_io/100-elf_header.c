#include "main.h"

/**
 * printerror()- prints error message
 * @Msg: error message to be printed
 * Return: nothing
 */

void printerror(char *Msg)
{
	printf("Error: %s\n", Msg);
	exit(98);
}

/**
 * showelf()- display elf header of a file
 * @file: filename to be displayed
 * Return: nothing
 */

void showelf(const char *file)
{
	int i, fd;
	myElf64_Ehdr head;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printerror("Cannot open file");
	}

	if (read(fd, &head, sizeof(head) != sizeof(head)))
	{
		printerror("Cannot read elf header");
	}

	if (head.e_indent[EI_MAG0] != ELFMAG0 && head.e_indent[EI_MAG1] != ELFMAG1 && head.e_indent[EI_MAG2] != ELFMAG2 && head.e_indent[EI_MAG3] != ELFMAG3)
	{
		printerror("Not an elf file");
	}

	printf("Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", head.e_indent[i]);
	}
	printf("\n");

	printf("Class:                           %s\n", head.e_indent[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                             %s\n", head.e_indent[EI_DATA] == ELFDATA2LSB ? "2's  complement, little endian" : "2's complement, big endian");
	printf("Version:                         %d\n", head.e_indent[EI_VERSION]);
	printf("ABI Version:                     %d\n", head.e_indent[EI_ABIVERSION]);
	printf("Type:                            %u\n", head.e_type);
	printf("Entry point address:             %lx\n", head.e_entry);

	if (close(fd) == -1)
	{
		printerror("Cannot close file descriptor");
	}
}

/**
 * main - test code
 * @argc: parameter
 * @argv: parameter
 * Return: a value
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printerror("Usage: elfinfo <ELF file>");
	}

	showelf(argv[1]);
	return (0);
}
