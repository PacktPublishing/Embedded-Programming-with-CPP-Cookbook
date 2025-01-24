#include <iostream>
// upload wrong
int main () {
    struct {
        uint8_t cc;
        uint32_t i;
    } a = {1, 1};
    std::cout << sizeof(a) << std::endl;
    struct {
        uint8_t c;
        uint8_t cc;
        uint32_t i;
    }c = {1, 1};
    std::cout << sizeof(c) << std::endl;
}