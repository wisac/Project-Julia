#include <iostream>
#include "signup.h"

void Signup::signupPrompt()
{
    std::cout << "\nPlease enter a username and password to register\n";
}

//initialising default username and password for new users 
Signup::Signup():username {"N/A"}, password {"N/A"}
{

}

//checking if username was accepted
bool Signup::usernameStatus()
{
    if(username != "N/A")
    {
        return true;
    }

    else
    {
        return false;
    }

}


void Signup::setUsername()
{
    std::string newName;

    std::cout << "Username:  ";   
    getline(std::cin, newName);

    char unacceptableChar = ' ';
    bool flag = true;
    

    while(flag == true)
    {   
        int spaceCount = 0;

        for(auto i: newName)
        {
            if(i == unacceptableChar )
            {   
                
                spaceCount += 1;
                
            } 
        }

        if(spaceCount == 0)
        {
            flag = false;
        }

        else
        {   
            std::cout << "Username cannot contain SPACES.\nPlease enter a valid username or press # to exit.\n\nUsername:  ";

            getline(std::cin, newName);

            if(newName == "#")
            {
                break;
            }
        }
    }

    //assigning username after it meets requirements
    if(newName != "#")
    {
        username = newName;
    }
}



void Signup::setPassword()
{
    std::string newPassword;

    long unsigned int minLengthOfPass = 6;

    bool flag = false;

    do
    {   
        if(flag)
        {
            std::cout<< "Password must be at least 6 characters long. Please enter a valid password.Press # to exit.\n\n";
        }
        std::cout << "Password:  ";
        getline(std::cin,newPassword);

        flag = true;
    }   
    while(newPassword.size() < minLengthOfPass && newPassword != "#");

    //assigning password after it pass all requirements
    if(newPassword != "#")
    {
        password = newPassword;
    } 



}

void Signup::displaySignupStatus()
{
    if(username != "N/A" && password != "N/A")
    {
        std::cout << "Your account has successfully been created!\n";
    }

    else
    {
        std::cout << "Failed to create an account.\n";
    }
}
