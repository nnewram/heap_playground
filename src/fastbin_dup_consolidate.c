#include "heaplib.h"

int main() {
    puts("");

    // fill tcache
    fill(2, T_CHUNKS);
    empty(2, T_CHUNKS);

    void *target = calloc(1, BIN_SIZE(2));
    
    free(target); // first free
    void *p1 = malloc(BIN_SIZE(62)); // consolidate, 62 or higher.
    
    free(target); // second free, since target == p1, this is free(p1); which is valid
    void *p2 = malloc(BIN_SIZE(62)); // allocate the same bin as p1, get p1 (which is target)

//    printf("%p : %p : %p\n", target, p1, p2);
}