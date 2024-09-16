#include <stdio.h>
#include <stdlib.h>

int do_a_lot_of_computations(int num) {
    int num2 = num * 2;
    int num3 = num2 * 2;
    int num4 = num3 * 2;
    return num4;
}

int* myfunction(int val) {
    val *= 2;
    int* ptr = (int*) malloc(sizeof(int));
    *ptr = val;
    return ptr;
}

int main() {
    int myval = 42;
    int* myptr = myfunction(myval);
    printf("Results of lots of computations: %d\n",
      do_a_lot_of_computations(5));
    printf("Value: %d\n", *myptr);
    free(myptr);
    return 0;
}