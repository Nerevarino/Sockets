#ifndef SOCKTYPES_H
#define SOCKTYPES_H

#include <sys/socket.h>


class SockTypes
{
public:
    static const int types_count = 9;
    static int values[types_count];
    static const char* names[types_count];
};

#endif // SOCKTYPES_H
