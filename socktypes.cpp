#include "socktypes.h"


int SockTypes::values[types_count] = {
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

const char* SockTypes::names[types_count] = {
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
