#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// The flag looks like FLAG{md5}

void encode(const char *filename, const char *text)
{
    FILE *fd = fopen(filename, "wb");
    if (fd == NULL) {
        printf("[*] Cannot open '%s'\n", filename);
        exit(EXIT_FAILURE);
    }

    int c = 0x7f;
    printf("[*] Initialize number: 0x%02x\n", c);
    for (size_t i = 0; i < strlen(text); i++) {
        fputc(c ^ text[i], fd);
        c ^= text[i];
    }

    fclose(fd);
}

int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("Usage: %s <FILENAME> <TEXT>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    printf("[*] Encoding...\n");
    encode(argv[1], argv[2]);

    printf("[*] Result in '%s'\n", argv[1]);

    exit(EXIT_SUCCESS);
}
