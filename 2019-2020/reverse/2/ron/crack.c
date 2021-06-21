#include <stdio.h>
#include <string.h>
//char out[25] = "\xe7\xeb\x7f\x68\x13\xfe\xd6\x40\xe3\xd1\0\x14\x60\xf0\x64\x9a\x04\xb8\x59\x72\x79\x38\xed\x18";

/*
    robin verton, dec 2015
    implementation of the RC4 algo
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 256   // 2^8

void swap(unsigned char *a, unsigned char *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int KSA(char *key, unsigned char *S) {

    int len = strlen(key);
    int j = 0;

    for(int i = 0; i < N; i++)
        S[i] = i;

    for(int i = 0; i < N; i++) {
        j = (j + S[i] + key[i % len]) % N;

        swap(&S[i], &S[j]);
    }

    return 0;
}

int PRGA(unsigned char *S, char *plaintext, unsigned char *ciphertext) {

    int i = 0;
    int j = 0;

    for(size_t n = 0, len = strlen(plaintext); n < len; n++) {
        i = (i + 1) % N;
        j = (j + S[i]) % N;

        swap(&S[i], &S[j]);
        int rnd = S[(S[i] + S[j]) % N];

        ciphertext[n] = rnd ^ plaintext[n];

    }

    return 0;
}

int RC4(char *key, char *plaintext, unsigned char *ciphertext) {

    unsigned char S[N];
    KSA(key, S);

    PRGA(S, plaintext, ciphertext);

    return 0;
}

int main(int argc, char *argv[]) {
    unsigned char *ciphertext = malloc(sizeof(int) * 25);

    RC4("blood", "\xe7\xeb\x7f\x68\x13\xfe\xd6\x40\xe3\xd1\x14\x60\xf0\x64\x9a\x04\xb8\x59\x72\x79\x38\xed\x18", ciphertext);

    for(size_t i = 0; i < 25; i++)
        printf("%c", ciphertext[i]);

    return 0;
}