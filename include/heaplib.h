#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_BINS 15
#define T_BINS 7
#define N_CHUNKS 27
#define T_CHUNKS 7

#define BIN_SIZE(index) ((1 + index) * 0x10)

size_t count[N_BINS] = {0};
void *allocations[N_BINS][N_CHUNKS + 1] = {0};

void *create(size_t index) {
    return allocations[index][count[index]++] = malloc(BIN_SIZE(index));
}

void delete(size_t index) {
    free(allocations[index][0]);
    memmove(&allocations[index][0], &allocations[index][1], (N_CHUNKS + 1) * sizeof *allocations[index]);
    count[index]--;
}


void fill(size_t index, size_t nr) {
	for (int i = count[index]; i < nr; i++) {
        create(index);
    }
}

void empty(size_t index, size_t nr) {
    for (int i = nr + 1; i != 0; i--) {
        delete(index);
    }
}
