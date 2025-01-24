#include <stdexcept>
#include <arpa/inet.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

void WriteData(int fd, const void* ptr, size_t size) {
  size_t offset =0;
  while (size) {
    const char *buffer = (const char*)ptr + offset;
    int written = write(fd, buffer, size);
    if (written < 0) {
      throw std::runtime_error("Can not write to file");
    }
    offset += written;
    size -= written;
  }
}

void WriteMessage(int fd, const char* str) {
  uint32_t size = strlen(str);
  //H:48 e:65 l:6C l:6C o:6F, W:57 o:6F r:72 l:6C d:64
  // uint32_t encoded_size = size; //05000000; 48656C6C 6F;050000 00;576F72 6C64
  uint32_t encoded_size = htonl(size); //00000005; 48656C6C 6F;000000 05;576F72 6C64
  WriteData(fd, &encoded_size, sizeof(encoded_size));
  WriteData(fd, str, size);
}

int main(int argc, char** argv) {
  int fd = open("envconv.data", O_WRONLY|O_APPEND|O_CREAT, 0666);
  for (int i = 1; i < argc; i++) {
    WriteMessage(fd, argv[i]);
  }
}
