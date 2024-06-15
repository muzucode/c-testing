#include <stdio.h>

int main() {
    char largeArray[10000000]; // 10 million bytes (10 MB), likely unsafe for the stack
    printf("Allocated largeArray on the stack\n");
    return 0;
}
