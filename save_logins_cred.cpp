#include <iostream>
#include <fstream>
#include "signup.h"

// Output username and password to a file
void saveSignupLogins(const Signup &source)
{
    std::ofstream outputFile;
    std::string fileName = "Lcredentials.txt";
    outputFile.open(fileName);

    if (outputFile.is_open())
    {
        if (source.username != "N/A" && source.password != "N/A")
        {
            outputFile << "username: " << source.username << "\n";
            outputFile << "password: " << source.password << "\n";
            std::cout << source.password << std::endl;
            std::cout << "Username and passwords successfully saved\n";
        }

        else
        {
            std::cout << "Sign up failed. Operation aborted\n";
        }
        outputFile.close();
    }

    else
    {
        std::cout << "Error, the file " << fileName << " could not be found. Failed to save username and password\n";
    }
    std::cout << "=================================================\n";
    // std::cout << "---------------------------------------\n";
}