#include "stdafx.h"
#include <string>
#include <fstream>
#include <sstream>
#include "../IO/IO.hpp"

class EnvReader
{
public:
    std::string getEnv()
    {
        std::string filePath(".env");
        IO io(filePath);
        std::fstream fileStream = io.getFileStream();
        std::stringstream buf;
        buf << fileStream.rdbuf();
        std::string content = buf.str();
        return content;
    }
};