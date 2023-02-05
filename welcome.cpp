#include <iostream>
#include <string>
#include "welcome.h"




void Intro::displayInfo()
{   
    std::cout << "*************************************************\n";
    std::cout << "*\t\t\t\t\t\t*\n";   
    std::cout << "*\t\tWelcome to " << appName << "\t\t*\n";
    std::cout << "*\t\t\t\t\t" << appVer << " *\n";
    std::cout << "*************************************************\n";
    

}

void Intro::printLines()
{
    std::cout << "__________________________________\n";
}

Intro::Intro() :appName {"Quiz Julia"}, appVer {"ver 1.0"}, developer {"Wilson I."}
{

}