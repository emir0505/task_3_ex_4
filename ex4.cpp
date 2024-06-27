#include "ex4.h"
#include <iostream>

void findThreeLetterWords(const char* text) {
    const char* wordStart = nullptr;
    int wordLength = 0;

    for (const char* p = text; *p != '\0'; ++p) {
        if (*p != ' ' && *p != '.' && wordStart == nullptr) {
            wordStart = p;
            wordLength = 1;
        } else if (*p != ' ' && *p != '.' && wordStart != nullptr) {
            ++wordLength;
        } else if ((*p == ' ' || *p == '.') && wordStart != nullptr) {
            if (wordLength == 3) {
                for (const char* q = wordStart; q < wordStart + wordLength; ++q) {
                    std::cout << *q;
                }
                std::cout << std::endl;
            }
            wordStart = nullptr;
            wordLength = 0;
        }
    }
}
