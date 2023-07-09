//
//  BindingSocket.hpp
//  WebServerLib
//
//  Created by Rohan Hangal on 7/7/23.
//

#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
class BindingSocket : public SimpleSocket
{
private:
    
public:
    // Constructor
    BindingSocket(int domain, int service, int protocol, int port, u_long interface);
    // Virtual funct from parent
    int connect_to_network(int sock, struct sockaddr_in address);
    
    };

}

#endif /* BindingSocket_hpp */


