#include "application.h"

using namespace std;





void
Application::checksock(int sockfd)
{
    if (sockfd != empty_socket) {
        cout << "sockfd = " << sockfd << endl;
    } else {
        cout << "ERROR: Can't create socket of this type!" << endl;
    }

}



Application::Application()
{

}

void
Application::init(int argc, char *argv[])
{
    result = 0;
    sockfd = empty_socket;
}

void
Application::run()
{
    sockfd = socket(PF_UNIX, SOCK_STREAM, IPPROTO_ICMP);
    checksock(sockfd);
    cout << "Work finished!" << endl;
}

int
Application::finish()
{
    return result;
}

