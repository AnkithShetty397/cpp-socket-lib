#ifndef LISTENING_SOCKET
#define LISTENING_SOCKET

#include "bindingSocket.hpp"
#include <sys/types.h>
namespace HDE{
    class ListeningSocket: public BindingSocket{
    private:
        int backlog;
        int listening;
    public:
        ListeningSocket(int domain,int service,int protocol,int port,u_long interface,int backlog);
        void start_listening();
    };
}

#endif