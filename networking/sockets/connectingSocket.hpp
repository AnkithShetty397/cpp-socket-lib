#ifndef CONNECTING_SOCKET
#define CONNECTING_SOCKET

#include "socket.hpp"

namespace HDE{
    class ConnectingSocket: public Socket{
    public:
        ConnectingSocket(int domain,int service, int protocol,int port,u_long interface);
        int connect_to_network(int sock,struct sockaddr_in address);
    };
}

#endif