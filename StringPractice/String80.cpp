
#include "String80.h"
#include <cstring>

String80::String80() {
    memset(str, '\0', sizeof(str));
}

String80::String80(const char* s) {
    memset(str, '\0', sizeof(str));
    strncpy_s(str, s, 80);
    str[80] = '\0';
}

const char* String80::getData() const {
    return str;
}

