#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compute_min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    srand(time(NULL));
    int i;
    int min = RAND_MAX;

    clock_t start = clock();

    for (i = 0; i < 1000000; i++) {
        int num1 = rand();
        int num2 = rand();
        min = compute_min(min,  compute_min(num1, num2));
    }

    clock_t end = clock();
    double execution_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Minimum value: %d\n", min);
    printf("Execution time: %f seconds\n", execution_time);

    return 0;

    
}