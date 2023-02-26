/**
 * Created by jonatas on 22/02/23.
 */

#include <stdio.h>

int main() {
    puts("Printable ASCII: ");

    for (int i = 32; i < 137; ++i) {
        putchar(i);
        putchar(i % 16 == 15 ? '\n' : ' ');
    }

    printf("\n");

    for (int ch = 0; ch <= 100; ch++) {
        printf("ASCII value = %d, Character = %c\n", ch, ch);
    }
}