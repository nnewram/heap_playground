#include "heaplib.h"

int main() {
    fill(0, T_CHUNKS + 3);
    empty(0, T_CHUNKS + 3);

    fill(2, T_CHUNKS + 3);
    empty(2, T_CHUNKS + 3);

    create(0);
}
