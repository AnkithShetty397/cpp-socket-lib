#include "socket.hpp"
#include <cstdlib>
#include <stdio.h>

//Default constructor
HDE::Socket::Socket(int domain, int service, int protocol, int port, u_long interface){
    //Define address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    //Establish connectionconnection
    sock = socket(domain,service,protocol);
    test_connection(connection);
}

//Test connection virtual function
void HDE::Socket::test_connection(int item_to_test){
    //confirm that the socket or the connection has been properly established
    if(item_to_test<0){
        perror("Failed to connect\n");
        exit(EXIT_FAILURE);
    }
}

//getter functions
struct sockaddr_in HDE::Socket::get_address(){
    return address;
}

int HDE::Socket::get_sock(){
    return sock;
}

int HDE::Socket::get_connection(){
    return connection;
}

void HDE::Socket::set_connection(int con){
    connection = con;
}