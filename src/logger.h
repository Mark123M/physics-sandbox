#ifndef _LOGGER_
#define _LOGGER_
#include <string>
#include <fstream>

class FileLogger {
    std::ofstream myFile;
public:
    FileLogger();
    ~FileLogger();
    std::string getCurTimeString();
    void logToFile(std::string s);
};

#endif