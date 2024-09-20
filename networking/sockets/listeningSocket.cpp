#include "listeningSocket.hpp"
#include "bindingSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain,int service,int protocol,int port,u_long interface,int backlog): HDE::BindingSocket(domain,service,protocol,port,interface){
    backlog = backlog;
    start_listening();
}

void HDE::ListeningSocket::start_listening(){
    listening = listen(get_connection(),backlog);
}