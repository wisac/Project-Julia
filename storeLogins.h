#ifndef STORELOGINS_H_
#define STORELOGINS_H_

#include <vector>
#include <string>

class StoreLogins
{
private:
    std::vector<std::string> usernameDatabase;
    std::vector<size_t> passwordDatabase;


    public:
    bool searchUsername(const std::string username, int *index);
    // int getUsernameLocation();
    size_t getHashedPassword(const int index);

};

#endif