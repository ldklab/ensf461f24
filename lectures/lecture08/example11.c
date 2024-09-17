#include <stdio.h>

int main() {
    int arr1[] = {1,2,3,4,5};
    float arr2[] = {2.0, -42, 0.5};
    char arr3[] = "Wassup?";

    printf("Size of arr1: %lu\n", sizeof(arr1));
    printf("Length of arr3: %lu; content of arr3: %s\n", sizeof(arr3), arr3);
}