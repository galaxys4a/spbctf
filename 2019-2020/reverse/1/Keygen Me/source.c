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


int check_email(const char *email)
{
    char c;
    int at = 0, dot = 0;
    int bdlen = 0;
    int adbdlen = 0;
    int adadlen = 0;

    while ((c = *email++) != 0)
    {
        if (!at)
        {
            if (is_valid(c)) bdlen++;
            if (c == '@') at = 1;
        }
        if (at)
        {
            if (!dot)
            {
                if (is_valid(c)) adbdlen++;
                if (c == '.') dot = 1;
            }
            if (dot && is_valid(c)) adadlen++;
        }
    }

    if (at && dot && bdlen && adbdlen && adadlen) return 1;
    else return 0;
}


int check_serial(char *email, char *serial)
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
            val_sr = (uint8_t)(*sr) | 0x20;
            if (val_sr != val_em)
                return 0;
            else
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
    char serial_format[32];

    sprintf(email_format, "%%%ds", EMAIL_LEN-1);
    sprintf(serial_format, "%%%ds", SERIAL_LEN-1);
    memset(email, 0, EMAIL_LEN);
    memset(serial, 0, SERIAL_LEN);

    printf("Email: ");
    scanf(email_format, email);
    printf("Serial: ");
    scanf(serial_format, serial);

    if (check_email(email) && check_serial(email, serial))
        puts("Right");
    else
        puts("Wrong");

    return 0;
}
