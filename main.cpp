#include <iostream>
#include <string>
#include "signup.h"
#include "welcome.h"



int main()
{
    Intro homepage;
    homepage.displayInfo();
    
    Signup newuser;
    newuser.signupPrompt();
    newuser.setUsername();
    if(newuser.usernameStatus())
    {   
        newuser.setPassword();
    }
    newuser.displaySignupStatus();
    
}