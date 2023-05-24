#pragma once
#include<iostream>
#include<cstring>

class String80
{
private:
    char str[81];

public:
    String80();
    String80(const char* s);
    const char* getData() const;
};

