#include <stdio.h>

int main() {
    int i, j, k, l;
    for (i = 0; i < 10; ++i) {
        for (j = 0; j < 10; ++j) {
            for (k = i; k < 10; ++k) {
                l = (k == i) ? j + 1 : 0;
                for (; l < 10; ++l) {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(' ');
                    putchar(k + '0');
                    putchar(l + '0');
                    if (!(i == 9 && j == 8 && k == 9 && l == 9)) {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');
    return 0;
}
