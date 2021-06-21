#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// The flag looks like FLAG{md5}

void decode(const char *filename)
{
    FILE *fd = fopen(filename, "rb");
    if (fd == NULL) {
        printf("[*] Cannot open '%s'\n", filename);
        exit(EXIT_FAILURE);
    }

    int c = 0x7f;
    int ch;
    while ((ch = fgetc(fd)) != EOF) {
        printf("%c", c ^ ch);
      	c = ch;
    }
    printf("\n");
    fclose(fd);
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <FILENAME>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    printf("[*] Decoding...\n");
    decode(argv[1]);

    exit(EXIT_SUCCESS);
}

