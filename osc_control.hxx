#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cerrno>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <time.h>

char const* host_ip("192.168.10.55");
int const portNum = 4000;
int const verbose = 1;

int SocketConnect();
void SocketQuery(int const socketOsc, char const* cmd);
void SendCommand(int const socketOsc, char const* cmd);
std::string GetParameter(int const socketOsc, char const* cmd);
void ReadData(int const socketOsc, std::string const& Chs, int const nEvnet);
std::string TranslateCommand(std::string const& mode, std::string const& cmd);
std::string TranslateCommand(std::string const& mode, std::string const& cmd, std::string const& parameter);
