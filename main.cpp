#include <iostream>
#include <string>
#include "signup.h"
#include "welcome.h"
#include "menu.h"
#include "encryptUserInfo.h"

int main()
{
    Intro homepage;
    homepage.displayInfo();

    char accountOption = menu();

    Signup newuser;

    if (accountOption == 'A')
    {
        newuser.createAccount(newuser);
    }

    saveSignupLogins(newuser);

    EncryptUserInfo user0(newuser.getUsername());
    std::cout << "Hased value = " << user0.getHashValue() << std::endl;
    user0.Hasher(newuser.getPassword());
    std::cout << "Hased value = " << user0.getHashValue() << std::endl;

    // sandragyamfi690@gmail.com
    return 0;
}