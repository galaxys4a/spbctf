#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The flag looks like FLAG{md5}
const char *flag = "464c41477b32653135356238376435383234653835656634313039346165633761383364637d";

int check(const char *text)
{
    char buf[512];
    memset(buf, 0, sizeof(buf));

    char *ptr = buf;
    for (size_t i = 0; text[i]; i++) {
        sprintf(ptr, "%02x", text[i]);
        ptr += 2;
    }

    return strcmp(flag, buf);
}

int main(int argc, char *argv[])
{
    char buf[256];
    memset(buf, 0, sizeof(buf));

    printf("Enter your flag: ");
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf)-1] = '\0';

    if (!check(buf)) {
        printf("[+] You win!\n");
    } else {
        printf("[-] You lose!\n");
    }

    exit(EXIT_SUCCESS);
}
