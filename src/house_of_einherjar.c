#include "heaplib.h"

int main() {
    char *target = create(1);
    target[BIN_SIZE(1) + 1] = 0; /* off by one null write */

    
}