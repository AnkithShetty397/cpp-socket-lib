#ifndef BINDING_SOCKET
#define BINDING_SOCKET

#include "socket.hpp"

namespace HDE{
    class BindingSocket: public Socket{
    public:
        BindingSocket(int domain,int service,int protocol, int port, u_long interface);
        int connect_to_network(int sock,struct sockaddr_in address);
    };
}

#endif