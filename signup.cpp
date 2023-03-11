#include <iostream>
#include "signup.h"
#include <istream>

// initialising default username and password for new users
Signup::Signup() : username{"N/A"}, password{"N/A"}
{
}

// checking if username was accepted
bool Signup::usernameStatus()
{
    if (username != "N/A")
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

    // std::cin.ignore();
    getline(std::cin >> std::ws, newName);

    // char unacceptableChar = ' ';
    bool flag = true;

    while (flag == true)
    {
        size_t unacceptedChar = 0;

        for (size_t i = 0; i < newName.length(); i++)
        {
            if ((newName[i] >= 65 && newName[i] <= 90) || (newName[i] >= 97 && newName[i] <= 122) || (newName[i] >= 48 && newName[i] <= 57) || (newName[i] == 46 || newName[i] == 95))
            {

                continue;
            }

            else
            {
                std::cout << "Username cannot contain SPACES.\nPlease enter a valid username OR press # to exit.\n\nUsername:  ";

                // std::cin.ignore();
                getline(std::cin >> std::ws, newName);
                // getline(std::cin, newName);

                if (newName == "#")
                {
                    flag = false;
                    break;
                }

                unacceptedChar++;
                break;
            }
        }

        if (unacceptedChar == 0)
        {
            flag = false;
        }

        /*else
        {
            std::cout << "Username cannot contain SPACES.\nPlease enter a valid username OR press # to exit.\n\nUsername:  ";

            std::cin.ignore();
            getline(std::cin, newName);

            if(newName == "#")
            {
                break;
            }
        }*/
    }

    // if(newName == "")
    // {
    //     std::cout << "Please enter a username or Press # to exit\n";
    //     this->setUsername();
    // }

    // assigning username after it meets requirements
    if (newName != "#")
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
        if (flag)
        {
            std::cout << "Password must be at least 6 characters long. Please enter a valid password  OR press # to exit.\n\n";
        }
        std::cout << "Password:  ";
        // std::cin.ignore();
        getline(std::cin >> std::ws, newPassword);

        flag = true;
    }

    while (newPassword.size() < minLengthOfPass && newPassword != "#");

    // assigning password after it pass all requirements
    if (newPassword != "#")
    {
        password = newPassword;
    }
}

void Signup::displaySignupStatus()
{
    if (username != "N/A" && password != "N/A")
    {
        std::cout << "Your account has successfully been created!\n";
    }

    else
    {
        std::cout << "Failed to create an account.\n";
    }
}

void Signup::createAccount(Signup &newuser)
{
    std::cout << "\n================= CREATE ACCOUNT ================";
    std::cout << "\nPlease enter a username and password to register\n";

    newuser.setUsername();

    if (newuser.usernameStatus())
    {
        newuser.setPassword();
    }
    newuser.displaySignupStatus();
}

std::string Signup::getUsername()
{
    return username;
}
std::string Signup::getPassword()
{
    return password;
}
