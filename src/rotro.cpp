#include "library.hpp"

#include <iostream>
#include <cstring>

int main(int argc, char *argv[]) {
    if (argc >= 2) {
        if (std::strcmp(argv[1], "--version") == 0) {
            std::cout << ROTRO_VERSION << std::endl;
            return 0;
        }
    } else {
        show_help();
        return 1;
    }
    return 0;
}