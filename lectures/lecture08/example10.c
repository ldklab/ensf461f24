#include <stdio.h>
#include <string.h>

struct my_first_struct {
    int height;
    int width;
    char name[16];
};

typedef struct {
    int height;
    int width;
    char name[16];
} my_second_struct;

int main() {

    struct my_first_struct s1;
    my_second_struct s2;

    s1.height = 5;
    s1.width = 10;
    strcpy(s1.name, "rectangle");

    s2.width = 12;
    s2.height = 12;
    strcpy(s2.name, "square");

    printf("s1 name: %s, s2 name: %s\n", s1.name, s2.name);

    return 0;
}