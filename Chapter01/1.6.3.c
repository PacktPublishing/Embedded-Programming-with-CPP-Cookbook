// wrong example
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
// upload wrong
int AppendString (const char* str) {
    int fd = open("test.txt", O_CREAT|O_RDWR|O_APPEND);
    if(fd < 0) {
        printf("Can't open file\n");
        return -1; //wrong
    }
    size_t len = strlen(str) ;
    if (write (fd, str, len) < len) {
        printf ("Can't append a string to a file\n");
        return -1; //wrong
    }
    close(fd);
    return 0;
}