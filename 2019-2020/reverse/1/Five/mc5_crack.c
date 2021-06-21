#include <stdio.h>

int main() {
    char buf[256];
    char serial[] = "f2hwldozg|:wbq";
    int i;

    for (i = 0; i < strlen(serial); i++) {
        buf[i] = serial[i] - i;
    }
    printf("Input is %s\n", buf);
    return 0;
}
