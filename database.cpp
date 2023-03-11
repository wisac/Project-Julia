#include "database.h"
#include "encryptUserInfo.h"
#include <iostream>

bool Database::saveData(const EncryptUserInfo &source)
{
    nameContainer.push_back(source.username);
    keyContainer.push_back(source.hashedValue);

    if (nameContainer.at(nameContainer.size() - 1) == source.username)
    {
        if (keyContainer.at(keyContainer.size() - 1) != source.hashedValue)
        {
            return false;
        }
    }

    return true;
}

void Database::printInfo()
{
    for (auto i: nameContainer)
        std::cout << i << std::endl;
    for(auto j: keyContainer)
        std::cout << j << std::endl;
    
}

bool Database::saveData(const std::string username, const size_t hashedValue)
{
    nameContainer.push_back(username);
    keyContainer.push_back(hashedValue);

    if (nameContainer.at(nameContainer.size() - 1) == username)
    {
        if (keyContainer.at(keyContainer.size() - 1) != hashedValue)
        {
            return false;
        }
    }

    return true;
}
