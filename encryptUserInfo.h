#ifndef _ENCRIPTUSERINFO_H_
#define _ENCRIPTUSERINFO_H_
#include <string>

class EncryptUserInfo
{
private:
    std::string username;
    size_t hashedValue;

public:
    EncryptUserInfo();
    EncryptUserInfo(const std::string username);
    size_t hashWord(const std::string word);
    void storeHashValue(size_t hashedValue);
    friend  class Database;
    
    
};

#endif
