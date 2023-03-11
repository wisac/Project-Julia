#include <algorithm>
#include "storeLogins.h"
#include <string>

bool StoreLogins::searchUsername(const std::string username, int *index)
{
    // binary search
    //  std::string target = username;
    //  int first = 0;
    //  int last = usernameDatabase.size() - 1;

    // for (int i = 0; first < last; i++)
    // {
    //     size_t middle = (first + last) / 2;

    //     if (usernameDatabase.at(middle) == target)
    //         //
    //     else if (usernameDatabase.at(middle) < target)
    //         first = middle + 1;
    //     else
    //         last = middle - 1;
    // }

    // find the item and store it's address in targetAddress
    std::vector<std::string>::iterator targetAddress = std::find(usernameDatabase.begin(), usernameDatabase.end(), username);

    // If the iterator points to object.end(), then the item was not found
    if (targetAddress != usernameDatabase.end())
    {
        *index = targetAddress - usernameDatabase.begin();
        return true;
    }
    return false;
}

// int getUsernameLocation()
// {
// }
size_t StoreLogins::getHashedPassword(const int index)
{
    return passwordDatabase.at(index);
}