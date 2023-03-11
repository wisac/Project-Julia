#include "encryptUserInfo.h"

EncryptUserInfo::EncryptUserInfo() : EncryptUserInfo("N/A")
{
}

EncryptUserInfo::EncryptUserInfo(const std::string username) : username(username), hashedValue{}
{
}

void EncryptUserInfo::Hasher(const std::string password)
{

    size_t hashcode = std::hash<std::string>{}(password);
    hashedValue = hashcode;
    
}

size_t EncryptUserInfo::getHashValue()
{
    return this->hashedValue;
}