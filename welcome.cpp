#include <iostream>
#include <string>
#include "welcome.h"




void Intro::displayInfo()
{
    std::cout << "\nWelcome to " << appName << "\n";

}

Intro::Intro() :appName {"Quiz Julia 1.0"}, appVer {"ver 1.0"}, developer {"Wilson I."}
{

}