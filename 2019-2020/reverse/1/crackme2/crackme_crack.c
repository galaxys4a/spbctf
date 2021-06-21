#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The flag looks like FLAG{md5}
const char *flag = "464c41477b32653135356238376435383234653835656634313039346165633761383364637d";

int main(int argc, char *argv[])
{
    char buf[256];
    memset(buf, 0, sizeof(buf));

    char tmp[2];
    for (int i = 0; i < strlen(flag); i++)
    {
        tmp[i % 2] = flag[i];
	if (i % 2 == 1)
        {
            int a;
            sprintf(tmp, "%02x", &a);
            buf[i / 2] = a;
        }
    }

    printf("Input is %s\n", buf);

    exit(EXIT_SUCCESS);
}

