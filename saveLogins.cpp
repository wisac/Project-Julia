#include <iostream>
#include <fstream>

void saveLogins(std::string name, std::string password);


void saveLogins(std::string name, std::string password)
{
    std::ofstream outputFile;
    outputFile.open("Lcredentials.txt");

    if(outputFile.is_open())
    {   outputFile << "username: "<<name << "\n";
        outputFile << "password: "<<password << "\n";

        std::cout << "Username and passwords successfully saved\n";
        outputFile.close();
    }

    else
    {
        std::cout << "Error, failed to save username and password\n";
    }

    

}