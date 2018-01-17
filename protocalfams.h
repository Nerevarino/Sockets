#ifndef PROTOCALFAMS_H
#define PROTOCALFAMS_H

#include <sys/socket.h>


class ProtocalFams
{
public:
    static const int protocols_count = 48;
    static int values[protocols_count];
    static const char* names[protocols_count];

public:
    ProtocalFams();
};

#endif // PROTOCALFAMS_H
