#ifndef SOCKET_HPP
#define SOCKET_HPP

#include<sys/socket.h>
#include<netinet/in.h>

namespace HDE{
    class Socket{
    private:
        struct sockaddr_in address;
        int sock;
        int connection;
    public:
        Socket(int domain,int service,int protocol,int port, u_long interface);
        virtual int connect_to_network(int sock,struct sockaddr_in) = 0;
        void test_connection(int);
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();
        void set_connection(int con);
    };
}

#endif 