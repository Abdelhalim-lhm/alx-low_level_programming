#ifndef DISPLAYFUNC_H
#define DISPLAYFUNC_H
#include "main.h"
/**
 * printversion - function that print version
 * @elf_header: the elf header to take data from
 * Return: version
 */
void printversion(Elfh_data elf_header)
{
	printf("  Version:                           ");
	if (elf_header.e_ident[6] == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("1 (current)\n");
	}
}
/**
 * printOSABI - function that print OS/ABI
 * @elf_header: the elf header to take data from
 * Return: OS/ABI
 */
void printOSABI(Elfh_data elf_header)
{
	printf("  OS/ABI:                            ");
	if (elf_header.e_ident[7] == 0)
		printf("UNIX - System V\n");
	else if (elf_header.e_ident[7] == 1)
		printf("UNIX - HPUX\n");
	else if (elf_header.e_ident[7] == 2)
		printf("UNIX - NETBSD\n");
	else if (elf_header.e_ident[7] == 3)
		printf("UNIX - LINUX\n");
	else if (elf_header.e_ident[7] == 6)
		printf("UNIX - SOLARIS\n");
	else if (elf_header.e_ident[7] == 7)
		printf("UNIX - AIX\n");
	else if (elf_header.e_ident[7] == 8)
		printf("UNIX - IRIX\n");
	else if (elf_header.e_ident[7] == 9)
		printf("UNIX - FREEBSD\n");
	else if (elf_header.e_ident[7] == 10)
		printf("UNIX - TRU64\n");
	else if (elf_header.e_ident[7] == 11)
		printf("UNIX - MODESTO\n");
	else if (elf_header.e_ident[7] == 12)
		printf("UNIX - OPENBSD\n");
	else if (elf_header.e_ident[7] == 13)
		printf("UNIX - OPENVMS\n");
	else if (elf_header.e_ident[7] == 14)
		printf("UNIX - NSK\n");
	else
		printf("<unknown: %d>\n", elf_header.e_ident[7]);
}
/**
 * printABI - function that print ABI
 * @elf_header: the elf header to take data from
 * Return: ABI
 */
void printABI(Elfh_data elf_header)
{
	printf("  ABI Version:                       ");
	printf("%i\n", elf_header.e_ident[8]);
}
/**
 * printype - function that print type
 * @elf_header: the elf header to take data from
 * Return: type
 */
void printype(Elfh_data elf_header)
{
	printf("  Type:                              ");
	if (elf_header.e_type == 0)
	{
	printf("NONE (No file type)\n");
	}
	else if (elf_header.e_type == 1)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (elf_header.e_type == 2)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (elf_header.e_type == 3)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (elf_header.e_type == 4)
	{
		printf("CORE (Core file)\n");
	}
	else if (elf_header.e_type == 0xfe00)
	{
		printf("LOOS (Operating system-specific)\n");
	}
	else if (elf_header.e_type == 0xfeff)
	{
		printf("HIOS (Operating system-specific)\n");
	}
	else if (elf_header.e_type == 0xff00)
	{
		printf("LOPROC (Processor-specific)\n");

	}
	else
	{
		printf("HIPROC (Processor-specific)\n");
	}
}
/**
 * printentry - function that print entry adress
 * @elf_header: the elf header to take data from
 * Return: entry adress
 */
void printentry(Elfh_data elf_header)
{
	printf("  Entry point adress:                ");
	printf("0x%lx\n", (unsigned long)elf_header.e_entry);
}
#endif
