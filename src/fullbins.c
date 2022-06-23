#include "heaplib.h"

int main() {
    for (int i = 0; i < T_BINS; i++) {
        fill(i, T_CHUNKS);
        empty(i, T_CHUNKS);
    }
}
