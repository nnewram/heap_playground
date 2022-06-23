#include "heaplib.h"

int main() {
    for (int i = 0; i < T_BINS; i++) {
        create(i);
        delete(i);
    }
}
