#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
typedef struct {
	unsigned char   e_ident[16];
	Elf64_Half      e_type;
	Elf64_Half      e_machine;
	Elf64_Word      e_version;
	Elf64_Addr      e_entry;
	Elf64_Off       e_phoff;
	Elf64_Off       e_shoff;
	Elf64_Word      e_flags;
	Elf64_Half      e_ehsize;
	Elf64_Half      e_phentsize;
	Elf64_Half      e_phnum;
	Elf64_Half      e_shentsize;
	Elf64_Half      e_shnum;
	Elf64_Half      e_shstrndx;
} Elfh_data;
void printmagic(Elfh_data);
void printclass(Elfh_data);
void printdata(Elfh_data);
void printversion(Elfh_data);
void printOSABI(Elfh_data);
void printABI(Elfh_data);
void printype(Elfh_data);
void printentry(Elfh_data);
#endif
