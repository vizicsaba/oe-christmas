#include <stdio.h>

int main() {
    int sum = 0;

    // Összeadás ciklussal
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    // Eredmény kiírása
    printf("Az 1-től 100-ig terjedő számok összege: %d\n", sum);

    return 0;
}
