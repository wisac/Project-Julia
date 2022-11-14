#include <string>

#ifndef _SIGNUP_H_
#define _SIGNUP_H_

class Signup
{
    private:
        std::string username;
        std::string password;

    public:
        Signup();
        bool usernameStatus();
        bool passwordStatus();
        void displaySignupStatus();
        void setUsername();
        void setPassword();
        void signupPrompt();
};



#endif