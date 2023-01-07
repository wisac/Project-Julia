#include <iostream>
#include <fstream>
#include "signup.h"


//Output username and password to a file
void saveSignupLogins(const Signup &source)
{   
    std::ofstream outputFile;
    outputFile.open("Lcredentials.txt");

    if(outputFile.is_open())
    {   outputFile << "username: "<<source.username << "\n";
        outputFile << "password: "<<source.password << "\n";
        std::cout << source.password << std::endl;

        std::cout << "Username and passwords successfully saved\n";
        outputFile.close();
    }

    else
    {
        std::cout << "Error, failed to save username and password\n";
    }

    

}