#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define ELF_MAGIC "\x7fELF"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(98);
  }

  char *filename = argv[1];
  int fd = open(filename, O_RDONLY);
  if (fd < 0) {
    perror("open");
    exit(98);
  }

  unsigned char elf_header[64];
  int ret = lseek(fd, 0, SEEK_SET);
  if (ret < 0) {
    perror("lseek");
    exit(98);
  }
  ret = read(fd, elf_header, sizeof(elf_header));
  if (ret < 0) {
    perror("read");
    exit(98);
  }

  if (memcmp(elf_header, ELF_MAGIC, 4) != 0) {
    fprintf(stderr, "File is not an ELF file\n");
    exit(98);
  }

  printf("Magic: %.4s\n", elf_header);
  printf("Class: %d\n", elf_header[4]);
  printf("Data: %d\n", elf_header[5]);
  printf("Version: %d\n", elf_header[6] + elf_header[7] * 256);
  printf("OS/ABI: %d\n", elf_header[8]);
  printf("ABI Version: %d\n", elf_header[9]);
  printf("Type: %d\n", elf_header[10]);
  printf("Entry point address: 0x%x\n", *(unsigned int *)(elf_header + 24));

  close(fd);
  return 0;
}
