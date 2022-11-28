#include <string>


#ifndef _WELCOME_H_
#define _WELCOME_H_

class Intro
{   private:
        std::string appName; 
        std::string appVer;
        std::string developer;

    public:
        Intro();
        void displayInfo();
        void printLines();

};


#endif