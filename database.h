#ifndef DATABASE_H_
#define DATABASE_H_
#include <string>
#include <vector>
#include "encryptUserInfo.h"

class Database
{
    std::vector<std::string> nameContainer;
    std::vector<size_t> keyContainer;

public:
    bool saveData(const EncryptUserInfo &source);
    bool saveData(const std::string username, const size_t hashValue);
    void printInfo();
};

#endif