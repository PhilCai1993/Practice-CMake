#include <stdio.h>
#include <stdlib.h>
#include "MyFunctions.h"

int main(int argc, char **argv) {
    if(argc < 2) {
        printf("argc less than 2");
        return 1;
    }
    int arg = atoi(argv[1]);
    printf("%d -> %d", arg, test_func(arg));
    return 0;
}