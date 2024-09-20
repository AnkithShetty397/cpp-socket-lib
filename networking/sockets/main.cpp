#include "listeningSocket.hpp"
#include "connectingSocket.hpp"
#include <memory>
#include <netinet/in.h>
#include <iostream>
#include <sys/socket.h>

int main(){
    std::cout<<"starting..."<<std::endl;
    std::unique_ptr<HDE::ListeningSocket> ls = std::make_unique<HDE::ListeningSocket>(AF_INET,SOCK_STREAM,0,8000,INADDR_ANY,10);
    std::unique_ptr<HDE::BindingSocket> bs = std::make_unique<HDE::BindingSocket>(AF_INET,SOCK_STREAM,0,8001,INADDR_ANY);
    std::unique_ptr<HDE::ConnectingSocket> cs = std::make_unique<HDE::ConnectingSocket>(AF_INET,SOCK_STREAM,0,8002,INADDR_ANY);
    std::cout<<"terminating..."<<std::endl;
    return 0;
}