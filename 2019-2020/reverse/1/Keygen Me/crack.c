#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#define EMAIL_LEN 256
#define SERIAL_LEN 256
#define is_alpha(c) ({ char _c = (c) | 0x20; _c >= 'a' && _c <= 'z'; })
#define is_digit(c) ({ (c) >= '0' && (c) <= '9'; })
#define is_valid(c) ({ is_alpha(c) || is_digit(c); })
#define A 7
#define MODULE 26


int crack_email(char *email, char *serial)
{
    char *em, *sr;
    uint8_t val_em, val_sr;

    if (!email) return 0;
    if (!serial) return 0;

    em = email;
    sr = serial;
    while (*em != 0) {
        if (is_alpha(*em)) {
            val_em = ((uint8_t)*em | 0x20) - 'a';
            val_em = ((A * val_em) % MODULE) + 'a';
            sr[0] = val_em;
            sr++;
        }
        em++;
    }

    return 1;
}

int main()
{
    char email[EMAIL_LEN];
    char serial[SERIAL_LEN];
    char email_format[32];

    sprintf(email_format, "%%%ds", EMAIL_LEN-1);
    memset(email, 0, EMAIL_LEN);

    printf("Email: ");
    scanf(email_format, email);

    crack_email(email, serial);
    printf("Serial for email %s - %s\n", email, serial);

    return 0;
}
