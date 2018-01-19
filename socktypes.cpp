#include "socktypes.h"

template<>
const int SocketTypes::values[] = {
    SOCK_STREAM,
    SOCK_DGRAM,
    SOCK_RAW,
    SOCK_RDM,
    SOCK_SEQPACKET,
    SOCK_DCCP,
    SOCK_PACKET,
    SOCK_CLOEXEC,
    SOCK_NONBLOCK
};

template<>
const char* SocketTypes::names[] = {
    "SOCK_STREAM",
    "SOCK_DGRAM",
    "SOCK_RAW",
    "SOCK_RDM",
    "SOCK_SEQPACKET",
    "SOCK_DCCP",
    "SOCK_PACKET",
    "SOCK_CLOEXEC",
    "SOCK_NONBLOCK"
};
