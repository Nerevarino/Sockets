#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <fstream>
#include <string>

#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <netdb.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "protocalfams.h"
#include "socktypes.h"
#include "ipprotocols.h"


using namespace std;

class Application
{
private:
    int result;
    int sockfd;
    static const int empty_socket = -1;
    ofstream output;
    string otext;






private:
    void checksock(int pf_pos, int st_pos, int pt_pos);

public:
    Application();
    void init(int argc, char* argv[]);
    void run();
    int finish();
};

#endif // APPLICATION_H
