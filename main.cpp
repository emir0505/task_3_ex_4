#include <iostream>
#include "ex4.h"

int main() {
    const int MAX_LENGTH = 1000;
    char text[MAX_LENGTH];

    std::cout << "Enter text (ending with a dot): ";
    std::cin.getline(text, MAX_LENGTH);

    int length = 0;
    while (text[length] != '\0') {
        ++length;
    }
    if (text[length - 1] != '.') {
        std::cerr << "Error: Text must end with a dot." << std::endl;
        return 1;
    }

    findThreeLetterWords(text);

    return 0;
}
