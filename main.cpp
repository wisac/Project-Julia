#include <iostream>
#include <string>
#include "signup.h"
#include "welcome.h"
#include "menu.h"
#include "database.h"
#include "storeLogins.h"



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

    //saveSignupLogins(newuser);

    EncryptUserInfo user0(newuser.getUsername());
    // std::cout << "Hased value = " << user0.getHashValue() << std::endl;
    
    std::cout << "Hased value = " << user0.hashWord(newuser.getPassword()) << std::endl;
    user0.storeHashValue(user0.hashWord(newuser.getPassword()));

    Database savings;
    savings.saveData(user0);
    savings.printInfo();
    savings.saveData("kojo",434534245454454);
    savings.printInfo();

    

   



    


    // sandragyamfi690@gmail.com
    return 0;
}