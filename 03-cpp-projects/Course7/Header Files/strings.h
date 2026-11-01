#ifndef COURSE7_STRINGS_H
#define COURSE7_STRINGS_H

#include <cctype>

namespace MyString {

    inline char InvertLetterCase(char char1) {
        unsigned char ch = static_cast<unsigned char>(char1);

        return std::isupper(ch)
            ? static_cast<char>(std::tolower(ch))
            : static_cast<char>(std::toupper(ch));
    }

}

#endif // COURSE7_STRINGS_H