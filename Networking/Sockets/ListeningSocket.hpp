//
//  ListeningSocket.hpp
//  WebServerLib
//
//  Created by Rohan Hangal on 7/7/23.
//

#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>

#include "BindingSocket.hpp"

namespace HDE
{

class ListeningSocket: public BindingSocket
{
private:
    int backlog;
    int listening;
public:
    ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
    void start_listening();
};

}

#endif /* ListeningSocket_hpp */
