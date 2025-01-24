#include<fstream>
// upload wrong
void AppendString (const std::string& str) {
    std::ofstream output("test.txt", std::ofstream::app) ;
    if (!output.is_open()) {
        throw std::runtime_error("Can't open file") ;
    }
    output << str; // no need to free manually
}