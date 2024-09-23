#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main() {

    int retval;
    char cmd[] = "/usr/bin/ls";
    char par[] = "-l";
    char* params[3];
    params[0] = cmd;
    params[1] = par;
    params[2] = NULL;

    retval = execve("/usr/bin/ls", params, NULL);

    if ( retval == -1 )
        printf("Error: %d\n", errno);
    perror(NULL);


    return 0;
}
