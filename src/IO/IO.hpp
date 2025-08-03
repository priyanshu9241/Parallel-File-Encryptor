#include "stdafx.h"
#include <string>
#include <fstream>
class IO
{
public:
    IO(std::string &filePath);
    ~IO();
    std::fstream getFileStream();

private:
    std::fstream m_fileStream;
};