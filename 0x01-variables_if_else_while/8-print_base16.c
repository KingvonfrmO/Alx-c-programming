#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 16; ++i) {
        putchar(i < 10 ? i + '0' : i - 10 + 'a');
    }
    putchar('\n');
    return 0;
}
