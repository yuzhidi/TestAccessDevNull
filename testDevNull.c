#include<stdio.h>
#include<fcntl.h>

main() {
    FILE* file = fopen("/dev/null", "ab");
    perror("/dev/null 1");
    fclose(file);
    //int fd = open("/dev/null", O_WRONLY|O_NONBLOCK);
    int fd = open("/dev/null", O_WRONLY);
    perror("/dev/null 2");
    close(fd);
}
/*
ckt@ckt-OptiPlex-990:/tmp$ gcc testDevNull.c
ckt@ckt-OptiPlex-990:/tmp$ ./a.out
/dev/null 1: Success
/dev/null 2: Success
 * */
