#include "IO.hpp"

IO::IO(std::string &filePath)
{
    m_fileStream.open(filePath, std::ios::in | std::ios::out | std::ios::binary);
    if (!m_fileStream.is_open())
    {
        throw std::runtime_error("Failed to open file: " + filePath);
    }
}
IO::~IO()
{
    if (m_fileStream.is_open())
    {
        m_fileStream.close();
    }
}

std::fstream IO::getFileStream() { return std::move(m_fileStream); }
