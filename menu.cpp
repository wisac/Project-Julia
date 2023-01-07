#include <iostream>
#include "menu.h"


// Signup Menu::createAccount()
// {
//     Signup newuser;

//     std::cout << "\nPlease enter a username and password to register\n";
    
//     newuser.setUsername();

//     if(newuser.usernameStatus())
//     {   
//         newuser.setPassword();
//     }
//     newuser.displaySignupStatus();


//     return newuser;
// }





char menu()
{
    std::cout << "Please select an option\n";
    std::cout << "A = Sign up (Newuser)\n";
    std::cout << "B = Sign in (Already have an account)\n";
    
    char option;
    std::cin >> option;

    switch(toupper(option))
    {   case 'A':
            option = 'A';
            break;
    
        // case 'B':
        //    loginAccount();
        //     break;
    
        default:
            std::cout << "Wrong option entered. Please choose a correct option\n";
    }

    return option;
}