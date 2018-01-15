#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <netdb.h>

class Application
{
private:
    int result;
    int sockfd;
    static const int empty_socket = -1;






private:
    void checksock(int sockfd);

public:
    Application();
    void init(int argc, char* argv[]);
    void run();
    int finish();
};

#endif // APPLICATION_H
