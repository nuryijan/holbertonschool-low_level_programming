#include <unistd.h>

const char art[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

int main() {
    const char *p;
    for (p = art; *p; p++) {
        write(2, p, 1);
    }
    return 1;
}
