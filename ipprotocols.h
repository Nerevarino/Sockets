#ifndef IPPROTOCOLS_H
#define IPPROTOCOLS_H

#include <netinet/in.h>

#include "table.h"

constexpr char proto_classname[] = "IpProtocols";

using IpProtocols = Table<25, proto_classname>;

#endif // IPPROTOCOLS_H
