#ifndef IPPROTOCOLS_H
#define IPPROTOCOLS_H

#include <netinet/in.h>

class IpProtocols
{
public:
    static const int protocols_count = 25;
    static int values[protocols_count];
    static const char* names[protocols_count];
};

#endif // IPPROTOCOLS_H
