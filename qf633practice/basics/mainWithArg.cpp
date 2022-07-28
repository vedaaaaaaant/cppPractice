#include <iostream>


int main (int argc, char *argv[]) {
    std::cout << "executable = " << argv[0] << std::endl;
    for (int i=1; i<argc; i++) {
        std::cout << "arg["<<i<<"] = " << argv[i] << std::endl;
        int j = 0;
        while (argv[i][j] != '\0')
            std::cout << argv[i][j++] << std::endl;

    }
}
