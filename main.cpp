#include <iostream>
#include <string>
#include "signup.h"
#include "welcome.h"
#include "menu.h"
#include "saveLogins.h"



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


    saveLogins(newuser.getUsername(),newuser.getPassword());

    

    //sandragyamfi690@gmail.com

}