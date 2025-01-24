//wrong and correct example
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include<iostream>
#include<fstream>

char read_last_byte(const char* filename) { //wrong
    char result = 0;
    int fd = open(filename, O_RDONLY) ;
    if (fd < 0) {
        printf("Can't open file\n") ;
        return -1;
    }
    lseek(fd, -1, SEEK_END); //wrong
    size_t s = read(fd, &result, sizeof(result));
    if (s != sizeof(result)) {
        printf("Can't read from file: &lu\n", s);
        close(fd);
        return -1;
    }
    close(fd);
    return result;
}

char read_last_byte2(const char* filename) { //correct
    char result = 0;
    std::fstream file;
    file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    file.open(filename) ;
    file.seekg(-1, file.end) ;
    file.read(&result, sizeof (result)) ;
    return result;
}