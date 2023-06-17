#pragma once


#include "server.hpp"
#include "socket.hpp"
#include  <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/select.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <netinet/in.h> 
#include <iostream>
#include <fstream>
#include <sstream>
#include <dirent.h>
#include <map>
#include <vector>
#include <algorithm>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include "request.hpp"
#include "response.hpp"


class MultiPlexing
{
    Server server;

public:
    MultiPlexing();
    ~MultiPlexing();

    void setup_server();
    void handleNewConnection(Server &server, std::vector<Socket> &Sock);
    void handleReadData(Socket &pdo);
    void handleWriteData(Socket &sock);
};
