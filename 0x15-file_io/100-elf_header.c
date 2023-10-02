#include "main.h"

/**
 *display_elf_header_info - displays the info of a file
 *@header: the pointer to the header
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
	int i;
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class:				%s\n", (header->e_ident[EI_CLASS] == ELFCLASS64)
			? "ELF64" : "ELF32");
	printf("Data:				%s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:			%d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:				%d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:			%d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:				%d\n", header->e_type);
	printf("Entry point address:		0x%lx\n", (unsigned long)header->e_entry);
}

/**
 *main - display the info contained in the ELF file
 *@ac: the argument count
 *@av: the argument vector
 *Return: returns 0 on success
 */
int main(int ac, char *av[])
{
	int fd;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", av[0]);
		exit(98);
	}

	fd = open(av[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error: Unable to open file %s\n", av[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Unable to read ELF header from file %s\n", av[1]);
		close(fd);
		exit(98);
	}

	close(fd);

	display_elf_header_info(&header);

	return (0);
}
