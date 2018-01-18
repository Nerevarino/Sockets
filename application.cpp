#include "application.h"







void Application::checksock(int pf_pos, int st_pos, int pt_pos)
{
    sockfd = socket(ProtocalFams::values[pf_pos], SockTypes::values[st_pos], IpProtocols::values[pt_pos]);
    if (sockfd == empty_socket) {

    } else {
        otext +=
                string(ProtocalFams::names[pf_pos]) + string(" ") +
                string(SockTypes::names[st_pos]) + string(" ") +
                string(IpProtocols::names[pt_pos]) + string("\n")
        ;
        close(sockfd);
        sockfd = empty_socket;
    }
}



Application::Application()
{

}

void
Application::init(int argc, char *argv[])
{
//    ps_pos = atoi(argv[1]);
//    st_pos = atoi(argv[2]);
//    pt_pos = atoi(argv[3]);
    otext = string("");
    result = 0;
    sockfd = empty_socket;
}

void
Application::run()
{

    for (int i=0; i < ProtocalFams::protocols_count; i++) {
        for (int j=0; j < SockTypes::types_count; j++) {
            for (int k=0; k < IpProtocols::protocols_count; k++) {
                    checksock(i, j, k);
            }
        }
    }
    output.open("output.txt");
    output << otext.c_str() << endl;
    output.close();
    cout << "Work finished!" << endl;
}

int
Application::finish()
{
    return result;
}






//    checksock(ps_pos, st_pos, pt_pos);
//    checksock(0,0,0);
//    for (int i = 0; i < IpProtocols::protocols_count; i++) {
//        checksock(2, 0, i);
//    }
