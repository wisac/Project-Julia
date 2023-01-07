#include <iostream>
#include <string>
#include "signup.h"
#include "welcome.h"
#include "menu.h"
//#include "save_logins_cred.h"



int main()
{
    Intro homepage;
    homepage.displayInfo();
    
    char accountOption = menu();
    

    Signup newuser;

    if(accountOption == 'A')
    { 
        newuser.createAccount(newuser);
    }


    
    saveSignupLogins(newuser);

    

    //sandragyamfi690@gmail.com
    return 0;

}