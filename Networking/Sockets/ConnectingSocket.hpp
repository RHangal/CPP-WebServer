//
//  ConnectingSocket.hpp
//  WebServerLib
//
//  Created by Rohan Hangal on 7/7/23.
//

#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
class ConnectingSocket : public SimpleSocket
{
private:
    
public:
    // Constructor
    ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
    // Virtual funct from parent
    int connect_to_network(int sock, struct sockaddr_in address);
    
};
}

#endif /* ConnectingSocket_hpp */
