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
    void Hasher(const std::string password);
    size_t getHashValue();
};

#endif
