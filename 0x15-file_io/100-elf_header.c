#include "main.h"
#include "displayfunc.h"
/**
 * printmagic - function that print the magic number
 * of an elf file
 * @elf_header: the elf header to take data from
 * Return: the magic numbers
 */
void printmagic(Elfh_data elf_header)
{
	int i;

	printf("Magic:  ");
	for (i = 0 ; i < 16 ; i++)
	{
		printf(" %02x", elf_header.e_ident[i]);
	}
	printf("\n");
}
/**
 * printclass - function that print the class
 * @elf_header: elf header to take data from
 * Retrun: the class
 */
void printclass(Elfh_data elf_header)
{
	if (elf_header.e_ident[4] == 1)
	{
		printf("  Class:                             ELF32\n");
	}
	else if (elf_header.e_ident[4] == 2)
	{
		printf("  Class:                             ELF64\n");
	}
	else
	{
		printf("  Class:                             NONE\n");
	}
}
/**
 * printdata - function that print data
 * @elf_header: the elf header to take data from
 * Return: data
 */
void printdata(Elfh_data elf_header)
{
	printf("  Data:                              2's complement,");
	if (elf_header.e_ident[5] == 1)
	{
		printf(" little endian\n");
	}
	else if (elf_header.e_ident[5] == 2)
	{
		printf("  big endian\n");
	}
	else
	{
		printf(" NONE\n");
	}
}
/**
 * main - function that print some elf header data
 * @ac: number of argument
 * @av: file arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	FILE *elf;
	int test;
	Elfh_data elf_header;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", av[0]), exit(98);
	}
	elf = fopen(av[1], "rb");
	if (elf == NULL)
	{
		dprintf(2, "Error: Can't open the file %s\n", av[1]), exit(98);
	}
	test = fread(&elf_header, sizeof(Elf64_Ehdr), 1, elf);
	if (test < 1)
	{
		dprintf(2, "Error: Can't open the file %s\nfread(&elf_header, sizeof(Elf64_Ehdr), 1, elf);", av[1]), exit(98);
	}
	if (elf_header.e_ident[0] != 0x7f || elf_header.e_ident[1] != 'E'
			|| elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F')
	{
		dprintf(2, "Error: %s it's not an ELF file\n", av[1]), exit(98);
	}
	printf("ELF Header:\n  ");
	printmagic(elf_header);
	printclass(elf_header);
	printdata(elf_header);
	printversion(elf_header);
	printOSABI(elf_header);
	printABI(elf_header);
	printype(elf_header);
	printentry(elf_header);
	test = fclose(elf);
	if (test == -1)
	{
		dprintf(2, "Error: Can't close file\n"), exit(98);
	}
	return (0);
}
