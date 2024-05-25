#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    int output = memsize();
    printf("Initial memory usage: %d bytes\n", output);
    void* ptr = malloc(20480);
    output = memsize();
    printf("After malloc, memory usage: %d bytes\n", output);
    free(ptr);
    output = memsize();
    printf("After freeing memory, memory usage: %d bytes\n", output);
    exit(0, 0);
}
