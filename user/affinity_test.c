#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    printf("PID: %d\n", getpid());
    int currMask = 5;
    set_affinity_mask(currMask);
    for (int i = 0; i < 10; i++) {
        printf("PID: %d\n", getpid());
        sleep(10);
    }
    exit(0, 0);
}