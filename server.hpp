#pragma once
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <iostream>
#include <fstream>      // std::ifstream
#include <sstream>      // std::istringstream
#include <dirent.h>
#include <unistd.h>
#include <sys/types.h>
#include <map>

#define PORT 1115


void    create_socket();