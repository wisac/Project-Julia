#include "encryptUserInfo.h"

EncryptUserInfo::EncryptUserInfo() : EncryptUserInfo("N/A")
{
}

EncryptUserInfo::EncryptUserInfo(const std::string username) :username(username), hashedValue{}
{
}

size_t EncryptUserInfo::hashWord(const std::string word)
{

    size_t hashcode = std::hash<std::string>{}(word);

    return hashcode;
    
    
}


void EncryptUserInfo::storeHashValue(size_t hashedValue)
{
    this->hashedValue = hashedValue;
}

